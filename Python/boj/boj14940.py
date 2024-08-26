N, M = list(map(int, input().split()))

map = [_ for _ in range(N)]
start = [0, 0]

for n in range(N):
    map[n] = list(map(int, input().split()))
    for m, v in enumerate(map[n]):
        if v == 2:
            start = [n, m]

for



