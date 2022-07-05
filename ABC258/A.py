K = int(input())
H = 21 + K // 60
M = format(K % 60,'02')
print(str(H) +":"+ str(M))