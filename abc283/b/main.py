N = int(input())
A = list(map(int, input().split()))
Q = int(input())

for i in range(Q):
    t, *kx = map(int, input().split())
    if t == 1:
        k, x = kx
        A[k - 1] = x
    else:
        k = kx[0]
        print(A[k - 1])
