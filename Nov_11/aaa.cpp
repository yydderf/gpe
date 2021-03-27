// C++ program to evaluate a prefix expression.
#include <bits/stdc++.h>
using namespace std;
 
int evaluatePrefix(string exprsn)
{
    stack<int> Stack;
 
    for (int j = exprsn.size() - 1; j >= 0; j--) {
       
        if (exprsn[j] == ' ')
            continue;
        if (isdigit(exprsn[j])) {
            int num = 0, i = j;
            while (j < exprsn.size() && isdigit(exprsn[j]))
                j--;
            j++;
 
            for (int k = j; k <= i; k++)
                num = num * 10 + int(exprsn[k] - '0');
 
            Stack.push(num);
        }
        else {
            int o1 = Stack.top();
            Stack.pop();
            int o2 = Stack.top();
            Stack.pop();
            switch (exprsn[j]) {
            case '+':
                Stack.push(o1 + o2);
                break;
            case '-':
                Stack.push(o1 - o2);
                break;
            case '*':
                Stack.push(o1 * o2);
                break;
            case '/':
                Stack.push(o1 / o2);
                break;
            case '%':
                Stack.push(o1 % o2);
                break;
            }
        }
    }
 
    return Stack.top();
}
 
// Driver code
int main()
{
    string exprsn;
    while (cin >> exprsn && exprsn[0] != '.') {
        cout << evaluatePrefix(exprsn) << endl;
    }
    return 0;
 
    // this code is contributed by Mohd Shaad Khan
}
