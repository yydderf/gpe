#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string join(vector<string> courses) {
    string ret;
    for (int i = 0; i < courses.size(); i++) {
        ret += courses[i];
    }
    return ret;
}

int main() {
    int n;
    while (cin >> n && !(n == 0)) {
        map<string, int> comboCount;
        for (int i = 0; i < n; i++) {
            vector<string> courses(5);
            for (int j = 0; j < 5; j++) {
                cin >> courses[j];
            }
            sort(courses.begin(), courses.end());
            comboCount[join(courses)]++;
        }
        int maxNum = 0, totalNum = 0;
        for (map<string, int>::iterator it = comboCount.begin(); it != comboCount.end(); it++) {
            if (it->second > maxNum) {
                maxNum = it->second;
                totalNum = it->second;
            }
            else if (it->second == maxNum) {
                totalNum += it->second;
            }
        }
        cout << totalNum << endl;
    }
    return 0;
}
