#include <stdio.h>
#include <stdlib.h>
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize; // Assuming it's an n x n matrix
    
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    // Reverse each row to get the final rotation
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - 1 - j];
            matrix[i][n - 1 - j] = temp;
        }
    }
}
int main(int argc, char *argv[]) {
	return 0;
}
