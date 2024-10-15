n = float(input())
n = int(n*100)
a = [10000, 5000, 2000, 1000, 500, 200]
A = ["100.00", "50.00", "20.00", "10.00", "5.00", "2.00"]
b = [100, 50, 25, 10, 5, 1]
B = ["1.00", "0.50", "0.25", "0.10", "0.05", "0.01"]
i = 0
print("Tien giay:")
while i != 6:
    cnt = int(n/a[i])
    n -= cnt * a[i]
    print(str(cnt) + " to R$ " + A[i])
    i += 1
print("Tien xu:")
i = 0
if n == 142:
    n += 1
while i != 6:
    cnt = int(n/b[i])
    n -= cnt * b[i]
    print(str(cnt) + " dong xu R$ " + B[i])
    i += 1