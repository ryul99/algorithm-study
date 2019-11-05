N, M = map(int, input().split(' '))
idx_list = list(map(int, input().split(' ')))
print(idx_list)
idx = 1
out = 0
l = N
all_list = list(range(1, N + 1))
def get_distance(idx, target, l):
    return min(abs(idx + l - target), abs(idx - target))

while(len(idx_list) > 0):
    print(get_distance(idx, idx_list[0], l))
    out += get_distance(idx, idx_list[0], l)
    idx = idx_list[0]
    del idx_list[0]
    l -= 1
print(out)