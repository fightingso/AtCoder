# 入力
N = int(input())

# 素数判定
result = 'Yes'
for i in range(2, int(N ** 0.5)):
    if N % i == 0:
        result = 'No'

#出力
print(result)