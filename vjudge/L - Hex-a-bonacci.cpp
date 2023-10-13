#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int fn(unsigned long long int n) {
    if (n == 0) return a;
    else if (n == 1) return b;
    else if (n == 2) return c;
    else if (n == 3) return d;
    else if (n == 4) return e;
    else if (n == 5) return f;
    return fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
}
int main() {
    unsigned long long  int n; int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}
