# 入力
A, B = map(int, input().split())

# AかBが0の時，プログラムを終了
if A == 0 or B == 0:
    quit()
else:
    # ユークリッドの互除法で最大公約数を求める
    while A % B != 0:
        mod = A % B
        A = B
        B = mod

# 出力
print(B)