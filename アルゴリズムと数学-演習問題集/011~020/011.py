#入力
N = int(input())

#素数なのか確認する関数
def isPrimeNumber(num):
    for i in range(2, num):
        if num % i == 0:
            return False

    return True

#2からNまでの素数を探索
result = filter(isPrimeNumber, range(2, N + 1))

#出力
print(" ".join(list(map(str, result))))
