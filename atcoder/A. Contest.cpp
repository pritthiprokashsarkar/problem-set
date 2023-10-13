#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int score1=max(((3*a)/10),(a-(a/250)*c));
    int score2=max(((3*b)/10),(b-(b/250)*d));

    if(score1>score2) cout<<"Misha"<<endl;
    else if(score2>score1) cout<<"Vasya"<<endl;
    else cout<<"Tie"<<endl;
}
