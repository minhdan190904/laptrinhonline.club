#include <iostream>
#include <algorithm>
using namespace std;

// Function to check if we can place C cows with at least 'minDist' between them
bool canPlaceCows(int positions[], int n, int c, int minDist) {
    int count = 1; // Place the first cow at the first position
    int lastPos = positions[0]; // Position of the last placed cow
    
    for (int i = 1; i < n; i++) {
        if (positions[i] - lastPos >= minDist) {
            count++;
            lastPos = positions[i];
        }
        if (count == c) return true;
    }
    return false;
}

int main() {
    int n, c;
    cin >> n >> c; // Read number of posts and cows
    
    int positions[n];
    for (int i = 0; i < n; i++) {
        cin >> positions[i]; // Read the positions of the posts
    }
    
    sort(positions, positions + n); // Sort the positions of the posts
    
    int left = 1; // Minimum possible distance
    int right = positions[n-1] - positions[0]; // Maximum possible distance
    int result = 0;
    
    // Binary search to find the largest minimum distance
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (canPlaceCows(positions, n, c, mid)) {
            result = mid; // Update the result as we found a valid solution
            left = mid + 1; // Try for a larger minimum distance
        } else {
            right = mid - 1; // Try for a smaller minimum distance
        }
    }
    
    cout << result << endl; // Output the largest possible minimum distance
    
    return 0;
}