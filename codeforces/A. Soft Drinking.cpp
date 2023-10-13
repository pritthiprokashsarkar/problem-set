#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drinks=((k*l)/nl)/n;
    int lemons=(c*d)/n;
    int lemons=(c*d)/n;
    int salts=(p/np)/n;

    int small=min({drinks,lemons,salts});

    cout<<small<<endl;
}
