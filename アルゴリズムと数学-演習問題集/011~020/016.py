#インポート
from functools import reduce
import math

#入力
N = int(input())
A = list(map(int,input().split()))

#最大公約数を求める
def gcd(*number):
    return reduce(math.gcd,number)

#出力
print(gcd(*A))