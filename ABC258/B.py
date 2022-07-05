N = int(input())
A = [input() for _ in range(N)]

dx = [0, 1, 1, 1, 0, -1, -1, -1]
dy = [1, 1, 0, -1, -1, -1, 0, 1]

ans = "0"

for i in range(N):
    for j in range(N):
        for k in range(8):
            num = ""
            for l in range(N):
                x = (i + dx[k] * l) % N
                y = (j + dy[k] * l) % N
                num += A[x][y]
            ans = max(ans,num)

print(ans)

