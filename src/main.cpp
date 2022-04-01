#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    unsigned const SZ = sizeof arr / sizeof arr[0];
    print_array(arr,SZ);
    rotate(arr,SZ, 4);
    print_array(arr,SZ);
    return 0;
}
