# 入力
N = int(input())
A = list(map(int, input().split()))

# 商品
product = {100:0,200:0,300:0,400:0}

# 商品を数える
for i in A:
    product[i] += 1

# 出力
print(product[100] * product[400] + product[200] * product[300])