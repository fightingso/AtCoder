# -*- coding: utf-8 -*-

n, q = map(int,input().split())
seqs = []

for _ in range(n):
    seqs.append(list(map(int, input().split()))[1:])

for _ in range(q):
    s, t = map(int, input().split())
    s -= 1
    t -= 1
    print(seqs[s][t])
