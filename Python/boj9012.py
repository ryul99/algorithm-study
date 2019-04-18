T = int(input())
for _ in range(T):
    s = input()
    c = 0
    f = False
    for ch in s:
        if(ch == '('):
            c = c + 1
        else:
            c = c - 1
        if c < 0:
            f = True
    if(c != 0):
        f = True
    if(f):
        print("NO")
    else:
        print("YES")