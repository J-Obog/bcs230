#include <iostream>
#define size 2
using namespace std; 

void matrixSum(int[][size], int[][size], int[][size]);
void printMatrix(int [][size]); 

void printMatrix(int matrix[][size]) {
    for(int row = 0; row < 2; row++) {
        cout << '[';
        for(int column = 0; column < 2; column++) {
            if(column == 0) {
                cout << matrix[row][column] << ','; 
            } else {
                cout << matrix[row][column] << ']' << endl;
            }
        }
    }
}

void matrixSum(int matrix_1[][size], int matrix_2[][size], int matrix_3[][size]) {
    for(int row = 0; row < 2; row++) {
        for(int column = 0; column < 2; column++) {
            matrix_3[row][column] = (matrix_1[row][column] + matrix_2[row][column]); 
        }
    }
}

int main() {
    int mat1[][size] = {{1,0},{3,1}};
    int mat2[][size] = {{1,2}, {4,1}}; 
    int result[][size] = {0}; 

    matrixSum(mat1, mat2, result);
    printMatrix(result);
    return 0; 
}
