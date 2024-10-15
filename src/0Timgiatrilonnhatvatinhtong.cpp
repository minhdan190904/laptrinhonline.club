n = int(input())
a = list(map(int, input().split()))
b = a.copy()
k = n
for i in range(n):
  a[i] = a[i] / k
  k -= 1
max1 = "{:.2f}".format(max(a))
print(max1)
if n == 1:
  print(int(a[0]))
else:
  print(2 * sum(b) - b[0] - b[n-1])