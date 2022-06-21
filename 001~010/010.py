#入力
N = int(input())

#N!を計算
N_Factorial = 1
for n in range(1,N+1):
    N_Factorial *= n

#出力
print(N_Factorial)