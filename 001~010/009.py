# 入力
N, S = map(int, input().split())
A = list(map(int, input().split()))

if N != len(A):  # Aの入力数がNと異なった場合入力エラー
    print('error')
else:
    answer = "No"
    for i in range(0, 1 << N):  # 2のN乗回繰り返し
        sum = 0
        for j in range(0, N):
            if (i & (1 << j) != 0):
                sum += A[j]
        if sum == S:
            answer = 'Yes'
        break
    #出力
    print(answer)
