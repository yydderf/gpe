#include <cmath>
#include <sstream>
#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while (getchar() != '\n');
    while (getchar() != '\n');
    while (testcase--) {
        string line;
        double distance = 0;
        double x1, y1, x2, y2;
        getline(cin, line);
        while (getline(cin, line) && line[0] != '\0') {
            istringstream ss(line);
            ss >> x1 >> y1 >> x2 >> y2;
            distance += hypot(x1 - x2, y1 - y2);
        }
        distance = distance / 1000;
        double hour = distance * 2 / 20;
        int minute = (int)round(hour * 60);
        cout << minute/60 << ":" << setfill('0') << setw(2) <<minute%60 << endl;
        if (testcase) {
            cout << endl;
        }
    }
    return 0;
}
