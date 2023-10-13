#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
            else cnt1++;
        }

        if (cnt0 != cnt1) {
            cout << "No\n";
            continue;
        }

        if (s == string(s.rbegin(), s.rend())) {
            cout << "Yes\n";
            continue;
        }

        bool found = false;
        for (int i = 0; i < n/2; i++) {
            if (s[i] != s[n-i-1]) {
                found = true;
                break;
            }
        }
        if (found) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}

