N, M = map(int, input().split())

curr = [1 for _ in range(M)]

def incr(l, n):
    if len(l) == 1:
        l[0] += 1
        return l
    for i in range(len(l) - 1, -1, -1):
        if l[i] < n:
            l[i] += 1
            return l
        l_sub = incr(l[:-1], n)
        l = l_sub + [l_sub[-1]]
        return l
    return l

while True:
    if sum(curr) > N * M:
        break
    print(" ".join(map(str, curr)))
    curr = incr(curr, N)

