N, M = map(int, input().split())
mat = list()
dp = [[0 for _ in range(N)] for _ in range(N)]

for _ in range(N):
    mat.append(list(map(int, input().split())))

for row in range(N):
    for col in range(N):
        if row > 0 and col > 0:
            dp[row][col] = dp[row][col-1] + dp[row-1][col] - dp[row-1][col-1] + mat[row][col]
        elif row > 0:
            dp[row][col] = dp[row-1][col] + mat[row][col]
        elif col > 0:
            dp[row][col] = dp[row][col-1] + mat[row][col]
        else:
            dp[row][col] = mat[row][col]

for _ in range(M):
    x1, y1, x2, y2 = map(int, input().split())
    if x1 < 2 and y1 < 2:
        print(dp[x2 - 1][y2 - 1])
    elif x1 < 2:
        print(dp[x2 - 1][y2 - 1] - dp[0][y1 - 2])
    elif y1 < 2:
        print(dp[x2 - 1][y2 - 1] - dp[x1 - 2][0])
    else:
        print(dp[x2 - 1][y2 - 1] - dp[x1 - 2][y2 - 1] - dp[x2 - 1][y1 - 2] + dp[x1 - 2][y1 - 2])

