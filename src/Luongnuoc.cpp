def trap(height, n):
    if n <= 2:
        return 0

    left = 0
    right = n - 1
    max_left = max_right = water_trapped = 0

    while left < right:
        if height[left] < height[right]:
            if height[left] > max_left:
                max_left = height[left]
            else:
                water_trapped += max_left - height[left]
            left += 1
        else:
            if height[right] > max_right:
                max_right = height[right]
            else:
                water_trapped += max_right - height[right]
            right -= 1

    return water_trapped


n = int(input())
height = list(map(int, input().split()))
print(trap(height, n))