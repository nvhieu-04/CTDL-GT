#include <stack>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    stack<char> t;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == ')' && t.empty() != 1 && t.top() == '(')
        {
            t.pop();
        }
        else
        {
            t.push(s[i]);
        }

    }
    cout << t.size();
}
