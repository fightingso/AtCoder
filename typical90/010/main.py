# -*- coding: utf-8 -*-

n = int(input())
c , p = [], []
for i in range(n):
    tmp_c, tmp_p = map(int, input().split())
    c.append(tmp_c)
    p.append(tmp_p)


q = int(input())
l , r = [], []
for j in range(q):
    tmp_l, tmp_r = map(int, input().split())
    l.append(tmp_l)
    r.append(tmp_r)

for x in range(q):
    score_1 = 0
    score_2 = 0
    for y in range(l[x]-1, r[x]):
        if c[y] == 1:
            score_1 += p[y]
        else:
            score_2 += p[y]
    print(score_1,score_2,sep=' ')
