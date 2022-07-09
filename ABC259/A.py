# -*- coding: utf-8 -*-
N,M,X,T,D = list(map(int,input().split()))

if N > X and M > X:
    T = T
elif N > X:
    T -= (X - M) * D
else:
    T -= (X - M) * D

print(T)
