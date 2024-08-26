N, M = list(map(int, input().split()))
l = list(map(int, input().split()))

inte_l = list()
inte = 0
for n in l:
    inte_l.append(inte)
    inte += n
inte_l.append(inte)

for _ in range(M):
    i, j = list(map(int, input().split()))
    print(inte_l[j] - inte_l[i - 1])
