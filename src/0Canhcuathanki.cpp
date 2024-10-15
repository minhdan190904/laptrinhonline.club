from queue import Queue

s = ["dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"]

def main():
    t = int(input())
    while t > 0:
        Q = Queue()
        for i in range(5):
            Q.put((i, 1))
        
        n = int(input())
        while n > 0:
            front = Q.get()
            if front[1] >= n:
                print(s[front[0]])
                n = 0
            else:
                n -= front[1]
                Q.put((front[0], front[1] * 2))
        
        t -= 1

if __name__ == "__main__":
    main()