#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int points;
        cin >> points;
        int x[points], y[points];
        for (int i = 0; i < points; i++) {
            cin >> x[i] >> y[i];
            cout << x[i] << " " << y[i] << endl;
        }
        for (int i = 0; i < points; i++) {
            for (int j = i+1; j < points; j++) {
            }
        }
    }
    return 0;
}
