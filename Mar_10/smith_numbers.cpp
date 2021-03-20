#include <iostream>
#include <cmath>

using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    // build composite db
    int composite[50000] = {true, true, false};
    for (int i = 2; i < 50000; i++) {
        if (!composite[i]) {
            for (int j = i+i; j < 50000; j += i) {
                composite[j] = true;
            }
        }
    }

    int testcases;
    cin >> testcases;
    while (testcases--) {
        int n;
        cin >> n;
        int smith_num = n+1;
        while (true) {
            int left_sum = 0, right_sum = 0;

    }
    return 0;
}
