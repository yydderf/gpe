#include <iostream>

using namespace std;

typedef long long ll;

ll egcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = egcd(b, a%b, x1, y1);
    x = y1;
    y = x1 - (a/b) * y1;
    return gcd;
}

int main() {
    ll a, b;
    while (cin >> a >> b) {
        ll x, y;
        ll gcd = egcd(a, b, x, y);
        cout << x << " " << y << " " << gcd << endl;
    }
    return 0;
}
