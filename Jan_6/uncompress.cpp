#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> word_list;

int main() {
    string buf, tmp;
    int value;
    while (getline(cin, buf) && buf[0] != '0') {
        for (int i = 0; buf[i]; i++) {
            if (isalpha(buf[i])) {
                tmp = "";
                while (isalpha(buf[i])) {
                    tmp.insert(tmp.end(), buf[i++]);
                }
                word_list.push_back(tmp);
                i--;
                cout << tmp;
            }
            else if (isdigit(buf[i])) {
                value = 0;
                while (isdigit(buf[i]))
                    value = value * 10 + buf[i++] - '0';
                tmp = word_list[word_list.size()-value];
                word_list.erase(word_list.end()-value);
                word_list.push_back(tmp);
                i--;
                cout << tmp;
            }
            else {
                cout << buf[i];
            }
        }
        cout << endl;
    }
    return 0;
}
