# -*- coding: utf-8 -*-

n = int(input())
ans = format(n, '0x')

while len(ans) < 2:
    ans = '0' + ans

print(ans.upper())
