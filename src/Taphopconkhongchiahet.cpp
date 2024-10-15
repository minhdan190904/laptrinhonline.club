n, k = map(int, input().split())
arr = list(map(int, input().split()))

count_array = [0] * k
for num in arr:
    count_array[num % k] += 1

result = 0
for i in range(1, k//2+1):
    if i != k - i:
        result += max(count_array[i], count_array[k-i])
    else:
        result += min(1, count_array[i])

result += min(1, count_array[0])  # Đối với phần tử có phần dư là 0

print(result)