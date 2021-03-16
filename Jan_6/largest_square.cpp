#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t, m, n, q, r, c;
    char arr[105][105];
    cin >> t;
    while (t--) {
        cin >> m >> n >> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        cout << m << " " << n << " " <<  q << endl;
        while (q--) {
            bool flag = true;
            cin >> r >> c;
            int i;
            for (i = 1; (i <= min(m, n)/2) && flag; i++) {
                for (int j = r-i; (j <= r+i) && flag; j++) {
                    for (int k = c-i; k <= c+i; k++) {
                        if (j < 0 || k < 0 || j >= m || k >= n || arr[r][c] != arr[j][k]) {
                            flag = false;
                            i--;
                            break;
                        }
                    }
                }
            }
            cout << 1+2*(i-1) << endl;
        }
    }
    return 0;
}
