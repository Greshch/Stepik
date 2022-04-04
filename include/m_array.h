//
// Created by dima on 04.04.2022.
//

#ifndef APP_M_ARRAY_H
#define APP_M_ARRAY_H

int** create_array2d(int row, int col);
void free_array2d(int row);
int ** transpose(const int * const * m, unsigned rows, unsigned cols);

#endif //APP_M_ARRAY_H
