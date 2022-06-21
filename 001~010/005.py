N = int(input())
A = list(map(int, input().split()))

if N != len(A):
    print('error')
else:
    print(sum(A) % 100)
