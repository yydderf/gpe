#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 10005;
int visit[MAXN] = {0};
vector<int> prime;

void get_prime() {
    int num = 0;
    visit[0] = visit[1] = 1;
    for (int i = 2; i < MAXN; i++) {
        if (!visit[i]) {
            prime.push_back(i);
            for (int j = i+i; j < MAXN; j += i) {
                visit[j] = 1;
            }
        }
    }
}


int main() {
    int n;
    get_prime();
    while (cin >> n && n) {
        int cnt = 0;
        for (int i = 0; i < prime.size(); i++) {
            int sum = 0;
            if (n < i) break;
            for (int j = i; j < prime.size(); j++) {
                sum += prime[j];
                if (sum == n) {
                    cnt++;
                }
                if (sum >= n) {
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
