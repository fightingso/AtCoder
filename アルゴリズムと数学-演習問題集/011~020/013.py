# 入力
N = int(input())

# 約数を出力
for i in range(1, int(N**0.5)+1):
    if N % i == 0:
        print(i)
        print(N // i)