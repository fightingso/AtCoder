#入力
N = int(input())
A = list(map(int, input().split()))

# Nの値と入力された整数の個数が違った時エラー
if len(A) != N: 
    print("error")
else:
    #出力
    print(sum(A))
