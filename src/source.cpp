//
// Created by dima on 31.03.2022.
//

#include "header.h"
#include <iostream>
using namespace std;

void get_num_f(int n)
{
    if (n != 0)
    {
        //tmp = n;
        cin >> n;
        get_num_f(n);
    }
    if (n != 0 )    cout << n << " ";
}

void rever_print_char(char const* s)
{
    char ch;
    if (*s)
    {
        ch = *s;
        rever_print_char(s+1);
    }
    cout << ch;
}

void rotate(int a[], unsigned size, int shift)
{
    shift %= size;
    for (int j = 0; j < shift; ++j)
    {
        int first_element = a[0];
        for (int i = 0; i < size - 1; ++i)
        {
            a[i] = a[i + 1];
        }
        a[size - 1] = first_element;
    }

}

void print_array(int *a, unsigned int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << a[i] << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    cout << endl;
}

unsigned strlen(const char *str)
{
    char const* p = str;
    while (*p++);
    return  p - str - 1;
}

int strstr(const char *text, const char *pattern)
{
    int len_pat = strlen(pattern);
    int len_text = strlen(text);
    int dif = len_text - len_pat;
    if (dif < 0)
    {
        return -1;
    }
    else if (len_pat == 0)
    {
        return 0;
    }

    for (int j = 0, i = 0; i < len_pat && j < len_text; ++j)
    {
        if (text[j] == pattern[i])
        {
            ++i;
            if (i == len_pat)
            {
                return j - len_pat + 1;
            }
        }
        else if (text[j] == pattern[0])
        {
            i = 1;
        }
        else
        {
            i = 0;
        }
    }
    return -1;
}

char* copystr(char* dest, char const* src)
{
    while (*dest++ = *src++);
    return dest;
}

char* catstr(char* dest, const char* src)
{
    copystr(dest + strlen(dest), src);
    return dest;
}

char* getline()
{
    int len = 2;
    char ch = 0;
    char* buff = new char[len];
    int i = 0;
    while (cin.get(ch) && ch != '\n')
    {
        cout << ch;
        ++i;
        if (i == len - 1)
        {
            len *= 2;
            char* tmp = new char[len];
            copystr(tmp, buff);
            delete[] buff;
            buff = tmp;
            //cout << "\n\t#len " << len << endl;
        }
    }
    buff[i - 1] = '\0';
    cout << "\n" << buff << endl;
    return buff;
}

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
