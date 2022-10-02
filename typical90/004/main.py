# -*- coding: utf-8 -*-

h, w = map(int,input().split())
a = [list(map(int,input().split())) for i in range(h)]

isum = [0] * h
jsum = [0] * w

for i in range(h):
    for j in range(w):
        isum[i] += a[i][j]
        jsum[j] += a[i][j]

for i in range(h):
    print(*[isum[i] + jsum[j] - a[i][j] for j in range(w)])
