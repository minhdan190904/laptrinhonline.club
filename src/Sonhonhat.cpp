def find_smallest_number(n, k):
    if k > n * 9 or (k == 0 and n > 1):
        return -1

    result = [0] * n
    result[0] = 1
    k -= 1

    for i in range(n - 1, 0, -1):
        digit = min(k, 9)
        result[i] = digit
        k -= digit

    result[0] += k

    return ''.join(map(str, result))


t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    print(find_smallest_number(n, k))