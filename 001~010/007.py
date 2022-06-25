#入力
N,X,Y = map(int,input().split())

#約数を数える
count = 0
for num in range(N):
    num += 1
    if num % X == 0 or num % Y == 0:
        count += 1

#出力
print(count)