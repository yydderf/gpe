#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int operate(string equa) {
    stack<int> buf;
    for (int i = equa.size()-1; i >= 0; i--) {
        if (equa[i] == ' ') {
            continue;
        }
        if (isdigit(equa[i])) {
            int tmp = 0, j = i;
            while (i < equa.size() && isdigit(equa[i])) {
                i--;
            }
            i++;
            for (int k = i; k <= j; k++) {
                tmp = tmp * 10 + equa[k] - '0';
            }
            buf.push(tmp);
        }
        else {
            int o1, o2;
            o1 = buf.top();
            buf.pop();
            o2 = buf.top();
            buf.pop();

            switch (equa[i]) {
                case '+':
                    buf.push(o1+o2);
                    break;
                case '-':
                    buf.push(o1-o2);
                    break;
                case '*':
                    buf.push(o1*o2);
                    break;
                case '/':
                    buf.push(o1/o2);
                    break;
                case '%':
                    buf.push(o1%o2);
                    break;
            }
        }
    }
    return buf.top();
}

int main() {
    string equa;
    while (cin >> equa && equa[0] != '.') {
        cout << operate(equa) << endl;
    }
    return 0;
}
