#include <iostream>

using namespace std;

void swap(int &x, int &y) {
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a = 200;
    int b = 100;

    cout << "Before swap, a: " << a << ", b: " << b << endl;
    swap(a, b);
    cout << "After swap, a: " << a << ", b: " << b << endl;
    return 0;
}
