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

