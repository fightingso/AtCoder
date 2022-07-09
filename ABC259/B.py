# -*- coding: utf-8 -*-
import math

a,b,d = list(map(float,input().split()))

r = math.sqrt(a**2+b**2)
rad = math.atan2(b, a)
degree = math.degrees(rad)

a = r * math.cos(math.radians(degree + d))
b = r * math.sin(math.radians(degree + d))

print('{} {}'.format(a,b))