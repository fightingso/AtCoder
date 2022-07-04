N = int(input())
A  = [input() for _ in range(N)]

dx = [0,1,1,1,0,-1,-1,-1]
dy = [1,1,0,-1,-1,-1,0,1]

for i in range(N):
    for j in range(N):
        for k in range(8):
            
