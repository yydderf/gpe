#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double x1, y1, x2, y2;
        cin >> x1 >> y1; 
        double dist = 0;
        while (cin >> x1 >> y1 >> x2 >> y2 && x1 != '\0') {
            dist += hypot(x1 - x2, y1 - y2);
        }
        dist /= 1000;
        double hh = dist * 2 / 20;
        int mm = (int)round(hh * 60);
        cout << mm / 60 << ":" << mm % 60 << endl;
        if (t) {
            cout << endl;
        }
    }
    return 0;
}
