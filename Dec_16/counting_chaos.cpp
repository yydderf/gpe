#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string curr;
        cin >> curr;
        int hour = (curr[0] - 48) * 10 + curr[1] - 48;
        int minute = (curr[3] - 48) * 10 + curr[4] - 48;
        while (true) {
            minute++;
            hour = ((minute/60)+hour) % 24;
            minute = minute % 60;
            stringstream ss;
            ss << hour*100+minute;
            string tmp = ss.str();
            string rev = string(tmp.rbegin(), tmp.rend());
            if (tmp.compare(rev) == 0) {
                cout << hour/10 << hour%10 << ":" << minute/10 << minute%10 << endl;
                break;
            }
        }
    }
    return 0;
}
