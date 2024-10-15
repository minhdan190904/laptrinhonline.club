t = int(input())
while t > 0:
    n = int(input())
    s1 = input()
    s2 = input()
    res = 0
    for i in range(n):
        p1 = int(s1[i])
        p2 = int(s2[i])
        if p1 < p2:
            res += min(abs(p1-p2), p1-p2+10)
        else:
            res += min(abs(p1-p2), p2-p1+10)
    print(res)
    t -= 1