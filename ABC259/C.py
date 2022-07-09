# -*- coding: utf-8 -*-
from itertools import groupby

S = list(str(input()))
T = list(str(input()))

def rle(s):
    tmp, count, ans = s[0], 1, ""
    for i in range(1, len(s)):
        if tmp == s[i]:
            count += 1
        else:
            ans += tmp+str(count)
            tmp = s[i]
            count = 1
    ans += tmp+str(count)
    return ans

def no():
    print('No')
    exit()

S,T = rle(S),rle(T)
if len(S) != len(T):
    no()

S,T = iter(S),iter(T)
for s1,s2,t1,t2 in zip(S,S,T,T):
    if s1 != t1:
        no()
    elif int(t2) == 1 and int(s2) != 1:
        no()
    elif int(t2) > 1 and int(s2) > int(t2):
        no()
    elif int(t2) > 1 and int(s2) == 1:
        no()
print('Yes')
