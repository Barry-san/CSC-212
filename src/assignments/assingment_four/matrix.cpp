#include <iostream>
using namespace std;

int add_matrix(const int matrix_A[][2], const int matrix_B[][2], int matrix_C[][2], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix_C[i][j] = matrix_B[i][j] + matrix_A[i][j];
        }
    }
    return 0;
}
int main()
{
    const int row = 2;
    const int columns = 2;
    const int size = 2;
    int A[row][columns] = {
        {1, 2},
        {3, 4}};

    int B[row][columns] = {
        {1, 2},
        {3, 4}};

    int C[row][columns];
    add_matrix(A, B, C, size);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}