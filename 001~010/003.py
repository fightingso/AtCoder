N = int(input())  # 整数の個数を入力
A = list(map(int, input().split()))

if len(A) != N:  # Nの値と入力された整数の個数が違った時
    print("error")
else:
    print(sum(A))
