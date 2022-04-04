#include <iostream>
#include "m_array.h"
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLLS = 5;
    int** a = create_array2d(ROWS, COLLS);
    set_arra2d_randomly(a, ROWS, COLLS);
    print_array2d(a, ROWS, COLLS);
    int** b = transpose(a, ROWS, COLLS);
    print_array2d(b, COLLS, ROWS);
    free_array2d(b, ROWS);
    free_array2d(a,ROWS);
    b = nullptr;
    a = nullptr;
    return 0;
}