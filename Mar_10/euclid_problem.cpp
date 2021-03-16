#include <iostream>

using namespace std;

int gcd(int a, int b, int &x, int &y){
    if (a % b == 0) {
        x = 0;
        y = 1;
        return b;
    }

    if (b % a == 0) {
        x = 1;
        y = 0;
        return a;
    }

    if (a >= b) {
        int xp, yp;
        int value = gcd(a-b*(a/b), b, xp, yp);
        x = xp;
        y = yp - xp*(a/b);
        return value;
    }
    else {
        int xp, yp;
        int value = gcd(a, b-a*(b/a), xp, yp);
        x = xp - (b/a)*yp;
        y = yp;
        return value;
    }
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        int x, y;
        int value = gcd(a, b, x, y);
        cout << x << " " << y << " " << value << endl;
    }
    return 0;
}
