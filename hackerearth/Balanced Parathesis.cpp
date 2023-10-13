#include <bits/stdc++.h>
using namespace std;

bool is_balanced(char &a, char &b)
{
    return ((a == '(' and b == ')') or
            (a == '{' and b == '}') or (a == '[' and b == ']'));
}

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    bool ans = true;
    for (auto it : s)
    {
        if (it == '(' or it == '{' or it == '[')
        {
            st.push(it);
        }
        else
        {
            if (st.empty())
            {
                ans = false;
                break;
            }
            else
            {
                if (is_balanced(st.top(), it))
                {
                    st.pop();
                }
                else
                {
                    ans = false;
                    break;
                }
            }
        }
    }
    if (!st.empty()) ans=false;
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}