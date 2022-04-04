//
// Created by dima on 04.04.2022.
//
#include "m_array.h"

int **create_array2d(int row, int col)
{
    int** matrix = new int*[row];
    matrix[0] = new int[row * col];
    for (int i = 1; i < row; ++i)
    {
        matrix[i]  = matrix[0] + i*col;
    }
    return matrix;
}

void free_array2d(int** matrix, int row)
{
    delete[] matrix[0];
    delete[] matrix;
}

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int** tran = create_array2d(cols, rows);
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            tran[j][i] = m[i][j];
        }
    }
    return tran;
}

