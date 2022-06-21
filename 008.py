count = 0
N,S = map(int,input().split())
for red in range(N):
    red += 1
    for blue in range(N):
        blue += 1
        if (red + blue) <= S:
            count += 1
print(count)