#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

double operate(string equa) {
    stack<double> buf;
    for (int i = equa.size()-1; i >= 0; i--) {
        if (equa[i] == ' ') {
            continue;
        }
        if (isdigit(equa[i])) {
            double value, j = i;
            while (i < equa.size() && isdigit(equa[i])) {
                i--;
            }
            i++;
            for (int k = i; k <= j; k++) {
                value = value * 10 + double(equa[i]-'0');
            }
            buf.push(value);
        }
        else {
            int o1 = buf.top();
            buf.pop();
            int o2 = buf.top();
            buf.pop();

            switch(equa[i]) {
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
