# https://codeforces.com/group/Qx9a5bDWI5/contest/243743/problem/B
N = int(input())
is_x = True
x_c = ''
another_c = ''
for i in range(N):
    s = input()
    if i == 0:
        x_c = s[0]
        another_c = s[1]
        if x_c == another_c:
            is_x = False
            break
    for j, k in enumerate(s):
        if j == i or j == N - 1 - i:
            is_x = is_x and k == x_c
        else:
            is_x = is_x and k == another_c
if is_x:
    print("YES")
else:
    print("NO")