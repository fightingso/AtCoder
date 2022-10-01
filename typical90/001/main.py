# -*- coding: utf-8 -*-

n, l = map(int,input().split())
k = int(input())
a = [0] + list(map(int,input().split())) + [l]

def check(l):
    left = 0
    for i in range(k+1):
        right = left
        while(right < len(a) and a[right] - a[left] < l):
            right += 1
        if right == len(a):
            return False
        left = right
    return True

bottom, top = 1, l+1

# 二部探索
while top - bottom > 1:
    mid = (top + bottom) // 2
    if check(mid):
        bottom = mid
    else:
        top = mid

print(bottom)
