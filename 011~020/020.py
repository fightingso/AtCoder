# 入力
N = int(input())
A = list(map(int, input().split()))

# 和が1000になる組み合わせを全探索で求める
count = 0
for i in range(0, N):
    for j in range(i+1, N):
        for k in range(j+1,N):
            for l in range(k+1,N):
                for m in range(l+1,N):
                    if A[i] + A[j] + A[k] + A[l] + A[m] == 1000:
                        count += 1

# 出力
print(count)
