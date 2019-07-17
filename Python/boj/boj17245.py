server_list = list()
N = int(input())
for _ in range(N):
    server_list += [int(a) for a in input().strip().split() if int(a) != 0]
server_list.sort()
half_server = (sum(server_list) + 1) // 2
time = 0
up_server = 0
for server in server_list:
    if time >= server:
        continue
    predicted_up_server = up_server + (server - time) * len(server_list)
    if predicted_up_server == half_server:
        time = server
        break
    elif predicted_up_server < half_server:
        time = server
        up_server = predicted_up_server
        continue
    else:
        time += (half_server - up_server - 1) // len(server_list) + 1
        break
print(time)