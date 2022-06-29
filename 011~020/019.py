# 入力
N = int(input())
A = list(map(int, input().split()))

# カードの辞書
Adic = {1: 0, 2: 0, 3: 0}

# カードの枚数を数える
for i in A:
    Adic[i] += 1

# 計算
count = 0
for i in range(1,4):
    count += Adic[i] * (Adic[i] - 1) / 2

# 出力
print(int(count))
