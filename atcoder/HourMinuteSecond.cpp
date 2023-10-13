#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sec=n%60;
    int a =n/60;
    int mini=a%60;
    int hour=a/60;
    cout<<hour<<":"<<mini<<":"<<sec<<endl;
}
