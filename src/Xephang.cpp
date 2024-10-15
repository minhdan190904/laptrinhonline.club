n = int(input())
x_values = list(map(int, input().split()))

res = 0
S = [(float('inf'), 0)]  # Using float('inf') as LLONG_MAX

for i in range(1, n + 1):
    x = x_values[i - 1]
    
    while S[-1][0] < x:
        res += S[-1][1]
        S.pop()
    
    if S[-1][0] == x:
        if len(S) > 2:
            res += 1
        res += S[-1][1]
        S[-1] = (S[-1][0], S[-1][1] + 1)
    else:
        if len(S) > 1:
            res += 1
        S.append((x, 1))

print(res)