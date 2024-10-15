import math
n = int(input())
a = list(map(int, input().split()))
cl = 0
for i in a:
    if i % 2 != 0:
        cl += 1
cc = n - cl
res = math.comb(cc, 3) + math.comb(cc, 1) * math.comb(cl, 2)
print(res)