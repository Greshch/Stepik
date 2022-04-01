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

