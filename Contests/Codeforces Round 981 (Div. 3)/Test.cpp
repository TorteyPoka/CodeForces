#include <iostream>
using namespace std;

// Function to initialize the matrix
void initializeMatrix(int matrix[][5]) {
    matrix[0][0] = 1; matrix[0][1] = 1; matrix[0][2] = -1; matrix[0][3] = -1; matrix[0][4] = 3;
    matrix[1][0] = -3; matrix[1][1] = 1; matrix[1][2] = 4; matrix[1][3] = 4; matrix[1][4] = -4;
    matrix[2][0] = -1; matrix[2][1] = -1; matrix[2][2] = 3; matrix[2][3] = 0; matrix[2][4] = -5;
    matrix[3][0] = 4; matrix[3][1] = 5; matrix[3][2] = 3; matrix[3][3] = -3; matrix[3][4] = -1;
    matrix[4][0] = 3; matrix[4][1] = 1; matrix[4][2] = -3; matrix[4][3] = -1; matrix[4][4] = 5;
}


/*
1  1 -1 -1  3
-3  1  4  4 -4
-1 -1  3  0 -5
 4  5  3 -3 -1
 3  1 -3 -1  5
*/
// Function to extract diagonal elements in zigzag pattern
void extractDiagonalElements(int matrix[][5], int size) {
    int rows = 5;
    int cols = 5;
    
    int row = rows - 1;
    int col = 0;
    
    cout << "[";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            cout << matrix[row-j][col+j];
            if (j < i) cout << ", ";
        }
        if (i < size - 1) cout << "]";
        cout << "\n";
    }
}

int main() {
    int matrix[5][5];
    initializeMatrix(matrix);
    
    extractDiagonalElements(matrix, 3);
    extractDiagonalElements(matrix, 4);
    extractDiagonalElements(matrix, 5);
    
    return 0;
}
