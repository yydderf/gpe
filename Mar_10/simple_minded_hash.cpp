#include <iostream>
#include <cstring>

using namespace std;

int memo[27][27][351];

int main() {
    memset(memo, 0, sizeof(memo));

    // build
    for (int i = 1; i <= 26; i++) {
        memo[i][1][i] = 1;
    }

    for (int i = 2; i <= 26; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= 351; k++) {
                memo[i][j][k] += memo[i-1][j][k];

                if (j >= 1 && k >= i) {
                    memo[i][j][k] += memo[i-1][j-1][k-i];
                }
            }
        }
    }

    int len, sum, Case = 0;
    while (cin >> len >> sum, !(len == 0 && sum == 0)) {
        cout << "Case " << ++Case << ": ";
        if (len > 26 || sum > 351) {
            cout << "0" << endl;
        }
        else {
            cout << memo[26][len][sum] << endl;
        }
    }
    return 0;
}
