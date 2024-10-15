n = int(input())
a = list(map(int, input().split()))
if len(a) == sum(a):
  print(n - 1)
else:
  b = []
  for i in range(n):
    b.append(1)
  dem = 0
  for i in range(n-1):
    for j in range(i + 1, n):
      k = a[i:j+1].count(0) - a[i:j+1].count(1)
      if k > dem:
        dem = k
  if dem == 0:
    print("1")
  else:
    print(a.count(1) + dem)