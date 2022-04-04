//
// Created by dima on 04.04.2022.
//

#ifndef APP_M_ARRAY_H
#define APP_M_ARRAY_H

int** create_array2d(int row, int col);
void set_arra2d_randomly(int** m, int row, int col);
void free_array2d(int** matrix, int row);
int ** transpose(const int * const * m, unsigned rows, unsigned cols);
void print_array2d(const int * const * m, unsigned row, unsigned col);
void swap_min(int *m[], unsigned rows, unsigned cols);

#endif //APP_M_ARRAY_H
