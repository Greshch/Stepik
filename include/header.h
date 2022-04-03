//
// Created by dima on 31.03.2022.
//

#ifndef APP_HEADER_H
#define APP_HEADER_H

void get_num_f(int n);
void rever_print_char(char const* s);

void print_array(int a[], unsigned size);
void rotate(int a[], unsigned size, int shift); //left loop shift array with it's size

unsigned strlen(const char *str);
int strstr(const char *text, const char *pattern);
char* copystr(char* dest, char const* src);
char* catstr(char* dest, const char* src);
char* getline();

int** create_array2d(int row, int col);
void free_array2d(int row);
int ** transpose(const int * const * m, unsigned rows, unsigned cols);

#endif //APP_HEADER_H
