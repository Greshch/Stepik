//
// Created by dima on 04.04.2022.
//
#include "m_array.h"
#include <iostream>
#include <algorithm>
#include <ctime>

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

void print_array2d(const int *const *m, unsigned int rows, unsigned int cols)
{
    using namespace std;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%5i", m[i][j]);
        }
        printf("\n");
    }printf("\n");
}

void set_arra2d_randomly(int **m, int rows, int cols)
{
    srand(time(nullptr));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            m[i][j] = rand() % 100;
        }
    }
}

void swap_min(int **m, unsigned int rows, unsigned int cols)
{
    using namespace std;
    int* p = min_element(m[0], m[0]+rows*cols);

    int id = p-m[0];
    int row_m = id / cols;
    int col_m = id % cols;
    cout << "\t#min[" << row_m << "," << col_m << "] = " << *p << endl;
    for (int i = 0; i < cols; ++i)
    {
        int tmp = m[0][i];
        m[0][i] = m[row_m][i];
        m[row_m][i] = tmp;
    }
}

