# -*- coding: utf-8 -*-
S = list(str(input()))
T = list(str(input()))

def ins(S,T):
    for i in range(len(S)):
        if S[i] != T[i]:
            if S[i - 2] == T[i]:
                if S[i - 2] == S[i - 1]:
                    S.insert(i - 2, S[i-2])
    if len(S) != len(T):
        return ins(S,T)
    else:
        return S

S = ins(S,T)
if S == T:
    print('Yes')
else:
    print('No')
