#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;
const ll mod = pow(10, 9) + 9;

ll exp_mod(ll a, ll n, ll b) {
    ll t;
    if (n == 0) return 1;
    if (n == 1) return a;
    t = exp_mod(a, n/2, mod);
    t = t*t%b;
    if ((n&1)== 1) t=t*a%b;
    return t;
}

int main() {
    ll n;
    while (cin >> n && n) {
        cout << exp_mod(3, n, mod) - 2 << endl;
    }
    return 0;
}
