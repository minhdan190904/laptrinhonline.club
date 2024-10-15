def can_make_all_zeros(arr):
    total_sum = sum(arr)
    if total_sum % 2 != 0:
        return False
    target_sum = total_sum // 2
    max_value = max(arr)
    
    if max_value <= target_sum:
        return True
    return False

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        if can_make_all_zeros(arr):
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()