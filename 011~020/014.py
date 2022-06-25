# 入力
N = int(input())

# 素因数分解の結果
Fact_N = []

# 素因数分解
for i in range(2, N):

    # iの2条がN以上の時，break
    if i ** 2 > N:
        break

    # iとNが互いに素となるまで，Nをiで割る
    # iをFact_Nに追加
    while N % i == 0:
        N = int(N / i)
        Fact_N.append(i)

# Nが2以上の時，Fact_Nに追加
if N >= 2:
    Fact_N.append(N)

#出力
print(*Fact_N)
