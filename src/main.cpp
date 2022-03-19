#include <iostream>
using namespace std;

int main()
{
    // put your code here
    int T = 0;
    std::cin >> T;
    int a = 0;
    int b = 0;
    for (int i = 0; i < T; i++) {
        std::cin >> a >> b;
        std::cout << (a + b) << std::endl;
    }
    return 0;
}