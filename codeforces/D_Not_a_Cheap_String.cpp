#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char,int>a, pair<char,int>b){
    return (a.first>b.first);
}
int main()
{
    int tc; cin>>tc;
    while(tc--){
        string s; cin>>s;
        int p; cin>>p;
        vector<pair<char,int>>v;
        for(int i=0;i<s.size();i++){
            v[i]={s[i],i};
        }
        int cost=0;
        for(int i=0;i<s.length();i++){
            cost+=(s[i]-'a'+1);
        }
        sort(v.begin(),v.end(),cmp);
        vector<int>index(s.length()+1);
        for(int i=0;i<s.size();i++){
            if(p>cost){
                cost-=(v[i].first-'a'+1);\
                index[v[i].second]=-1;
            }
        }
        for(int i=0;i<s.size();i++){
            if(index[i]==-1){
                continue;
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;

    }
    return 0;
}