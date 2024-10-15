def main():
    n = int(input())
    a = []
    for _ in range(n):
        a.append(tuple(map(int, input().split())))
    a.sort(key=lambda x: x[1])
    t = float('-inf')
    k = 0
    for i in range(n):
        if a[i][0] > t:
            k += 1
            t = a[i][1]
    print(k)
if __name__ == "__main__":
    main()