def check1(n, a):
    s = str(n)
    for i in s:
        if int(i) in a:
            return False
    return True

def p1(n, b):
    s = str(n)
    m = len(s)
    r = [b[0]] * m
    for i in b:
        if i > int(s[0]):
            r[0] = i
            return ''.join(map(str, r))
    return str(99999999)

def p2(n, b, a):
    s = list(str(n))
    m = len(s)
    t = -1
    for i in range(m):
        if int(s[i]) not in b:
            t = i
            break
    if t == -1:
        return str(99999999)
    t1 = -1
    for i in b:
        if i > int(s[t]):
            s[t] = str(i)
            t1 = 0
            break
    if t1 == -1:
        return str(99999999)
    for i in range(t + 1, m):
        s[i] = str(b[0])
    return ''.join(s)

n, k = map(int, input().split())
a = list(map(int, input().split()))

if check1(n, a):
    print(n)
else:
    b = set()
    for i in range(0, 10):
        if i not in a:
            b.add(i)
    b = list(set(b))
    r1 = int(p1(n, b))
    r2 = int(p2(n, b, a))
    l = len(str(n))
    if b[0] == 0:
     r3 = str(b[1]) + "0" * l
    else:
     r3 = str(b[0]) * (l+1)
    print(min(r1, min(int(r3), r2)))