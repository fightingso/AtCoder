# -*- coding: utf-8 -*-

def cal_harf(n):
    return int(n / 2)

N = int(input())
A = list(map(int,input().split()))

A = map(cal_harf,A)
print(*A)

