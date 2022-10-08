# -*- coding: utf-8 -*-

import math


def main():
    A, B, C = list(map(int, input().split()))

    gcd = math.gcd(A, B)
    gcd = math.gcd(gcd, C)

    print((A // gcd - 1) + (B // gcd - 1) + (C // gcd - 1))


if __name__ == '__main__':
    main()
