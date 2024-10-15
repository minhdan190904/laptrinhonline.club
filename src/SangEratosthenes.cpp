t = int(input())
l, r, a = [], [], []
for i in range(t):
  li, ri = map(int, input().split())
  l.append(li)
  r.append(ri)
R = max(r)
for i in range(R + 1):
  a.append(1)
for i in range(2, R + 1):
  if a[i] == 1:
    for j in range(i * i, R + 1, i):
      a[j] = 0
for i in range(t):
  print(a[l[i]:r[i]+1].count(1))