x, y, s = map(int, input().split())
k = s / (x+y)
m = k % 1
k = int(k)
print(k*x + s - (k*(x+y)))