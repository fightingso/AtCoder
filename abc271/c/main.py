# -*- coding: utf-8 -*-

n = int(input())
a = list(map(int,input().split()))

bottom = 0
top = 333333

def check(m):
    exist = [e for e in a if e <= m]
    need = m - len(set(exist))
    extra = n - len(set(exist))
    return extra // 2 >= need

while top - bottom > 1:
    mid = (top + bottom) // 2
    if(check(mid)):
        bottom = mid
    else:
        top = mid

print(bottom)

