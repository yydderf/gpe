#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

int toValue(string digits) {
    int value = 0;
    for (int i = 0; i < digits.size(); i++) {
        value = value * 10 + digits[i] - '0';
    }
    return value;
}

int operate(string equation) {
    vector<int> buf;
    vector<string> elements;
    int o1, o2;
    istringstream ss(equation);
    string tmp;
    while (getline(ss, tmp, ' ')) {
        elements.push_back(tmp);
    }
    for (int i = elements.size()-1; i >= 0; i++) {
        if (isdigit(elements[i][0])) {
            buf.push_back(toValue(elements[i]));
        }
        else {
            o1 = buf.back();
            buf.pop_back();
            o2 = buf.back();
            buf.pop_back();
            switch (elements[i][0]) {
                case '+':
                    buf.push_back(o1+o2);
                    break;
                case '-':
                    buf.push_back(o1-o2);
                    break;
                case '*':
                    buf.push_back(o1*o2);
                    break;
                case '/':
                    buf.push_back(o1/o2);
                    break;
                case '%':
                    buf.push_back(o1%o2);
                    break;
            }
        }
    }
    return buf.back();
}

int main() {
    string equation, tmp;
    while (cin >> equation && equation[0] != '.') {
        cout << operate(equation) << endl;
    }
    return 0;
}
