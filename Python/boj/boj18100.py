import math

def _round(n):
    c = math.floor(n)
    if n >= c + 0.5:
        return c + 1
    else:
        return c

l = list()
n = int(input())
for _ in range(n):
    i = int(input())
    l.append(i)

l.sort()

bound = _round(n * 0.15)
l = l[bound:n-bound]
if not (n - 2*bound):
    print(0)
else:
    print(_round(sum(l) / (n - 2*bound)))
