# -*- coding: utf-8 -*-

n = int(input())

if n % 2 != 0:
    exit()

def check(x):
    count = 0
    par = ""
    for i in range(n):
        if (x >> i) % 2 == 1:
            par += ")"
            count += 1
        else:
            par += "("
            count -= 1
        if count < 0:
            return False
    if count != 0:
        return False
    return par[::-1]

for i in range(1 << n):
    ans = check(i)
    if ans:
        print(ans)
