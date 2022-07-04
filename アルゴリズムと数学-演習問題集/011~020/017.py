import math

#入力
N = int(input())
A = list(map(int,input().split()))

#出力
#math.lcmで最小公倍数を求める
print(math.lcm(*A))