#include <bits/stdc++.h>
using namespace std;
#define fr(m) for (int i = 0; i < m; i++)
#define all(v) v.begin(), v.end()
int main()
{
    int n;
    cin >> n;
    int even_cnt = 0, odd_cnt = 0, pos_cnt = 0, neg_cnt = 0;
    vector<int> a(n);
    fr(n) cin >> a[i];
    fr(n)
    {
        if (a[i] > 0)
            pos_cnt++;
        if (a[i] < 0)
            neg_cnt++;
        if (a[i] % 2 == 0)
            even_cnt++;
        if (a[i] % 2 == 1 or a[i] % 2 == -1)
            odd_cnt++;
    }

    cout << "Even: " << even_cnt << endl;
    cout << "Odd: " << odd_cnt << endl;
    cout << "Positive: " << pos_cnt << endl;
    cout << "Negative: " << neg_cnt << endl;
}