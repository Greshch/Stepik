#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int log2(int num) {
    int count  = 0;
    while (num >= 2) {
        count++;
        num /= 2;
    }
    return count;
}

int main() {
    int T = 0;
    int num = 0;
    cin >> T;
    while (T-- > 0) {
        cin >> num;
        cout << log2(num) << endl;
    }
    return 0;
}