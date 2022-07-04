#入力
N,S = map(int,input().split())

#合計がN以下となる書き方の数
count = 0

#数える
for red in range(N):
    red += 1
    for blue in range(N):
        blue += 1
        if (red + blue) <= S:
            count += 1

#出力
print(count)