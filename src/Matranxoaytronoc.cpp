#include <stdio.h>

void generateSpiralMatrix(int n) {
    int matrix[205][205];  // Assuming a maximum size of 100x100

    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = num++;
        }
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = num++;
        }
        right--;

        // Traverse bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        // Traverse left column
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }

    // Print the spiral matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%10d", matrix[i][j]);  // Adjust the width as needed
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    generateSpiralMatrix(n);

    return 0;
}