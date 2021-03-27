#include <iostream>
#include <string>

using namespace std;

void computeLPSArray(string pat, int m, int* lps) {
    // length of the previous longest prefix suffix
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < m) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len-1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main() {
    string pat;
    while (cin >> pat && pat.size() != 0) {
        int lps[pat.size()];
        computeLPSArray(pat, pat.size(), lps);
        for (int i = 0; i < pat.size(); i++) {
            cout << lps[i] << "|";
            if (i == pat.size()-1) {
                cout << endl;
            }
        }
    }
    return 0;
}
