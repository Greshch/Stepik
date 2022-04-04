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
    swap_min(a, ROWS, COLLS);
    print_array2d(a, ROWS, COLLS);
    free_array2d(a,ROWS);
    a = nullptr;
    return 0;
}