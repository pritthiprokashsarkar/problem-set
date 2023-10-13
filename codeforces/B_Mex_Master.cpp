#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        long long cnt0 = 0, cnt1 = 0, cnt = 0;
        long long notun = n;
        while (notun--)
        {
            int a;
            cin >> a;
            if (a == 0)
                cnt0++;
            else if (a == 1)
                cnt1++;
            else
                cnt++;
        }
        if (cnt > 0 or cnt0 == n)
            cout << 1 << endl;
        else
        {
            if (cnt0 <= (n+1 / 2))
                cout << 0 << endl;
            else
            {
                    cout << 2 << endl;
            }
        }
    }
}