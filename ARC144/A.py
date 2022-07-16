from numpy import result_type


N = int(input())
M = 0

def max_x(N):
    result = ""
    for i in range(9,0,-1):
        while N // i > 0:
            result += str(i)
            N = N - i
    return result

def min_x(n,M):
    result = ""
    for i in range(n, 1,-1):
        while M // i > 0:
            result += str(i)
            M = M - i
    return result


result = max_x(N)

for j in range(len(result)):
    M  += 2 * int(result[j])

print(M)

for n in range(8,1,-2):
    aaa = 0
    result_x = ""
    x = min_x(n,M)
    for m in range(len(x)):
        result_x += str(int(x[m]) // 2)
    for m in range(len(result_x)):
        aaa += int(result_x[m])
    if aaa == N:
        break

result_x = int(''.join(sorted(str(result_x))))
print(result_x)






