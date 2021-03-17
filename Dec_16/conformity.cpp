#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    while (cin >> n && !(n == 0)) {
        int arr[n][5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> arr[i][j];
            }
            sort(arr[i], arr[i]+5);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
