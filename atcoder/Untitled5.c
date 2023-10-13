#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 1000;

int main() {
    int n;
    cin >> n;

    int a[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    while (a[0] != a[n - 1]) {
        for (int i = 1; i < n; i++) {
            a[i] = a[i] - a[0];
        }
        a[0] = a[0];

        sort(a, a + n);
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

