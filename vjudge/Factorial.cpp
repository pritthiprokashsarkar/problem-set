#include<bits/stdc++.h>
using namespace std;
void fun(unsigned long long int i, unsigned long long int fac)
{
    if(i<1)
    {
        cout<<fac<<endl;
        return;
    }
    fun(i-1, fac*i);
}
int main()
{
    unsigned long long int n; cin>>n;
    fun(n, 1);

}
