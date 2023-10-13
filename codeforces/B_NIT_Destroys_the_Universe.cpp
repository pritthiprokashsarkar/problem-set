#include<bits/stdc++.h>
using namespace std;
void sex(){
    int fuck; cin>>fuck;
    int anus=0;
    vector<int>ass(fuck);
    for(int slut=0;slut<fuck;slut++)cin>>ass[slut];
    if(count(ass.begin(),ass.end(),0)==fuck){
        cout<<0<<endl;
    }
    else if(count(ass.begin(),ass.end(),0)==0){
        cout<<1<<endl;
    }
    else{
        for(int penis=0; penis<fuck; penis++){
        if(ass[penis]==0)continue;
        else if(penis==fuck-1 or ass[penis+1]==0)anus++;
    }
    if(anus==1)cout<<1<<endl;
    else cout<<2<<endl;
    }
    
}
int main()
{
    int tits; cin>>tits;
    while(tits--){
        sex();
    }
}