/* 
    a&b returns bitwise and operation
   a||b returns bitwise or operation
   a||b>=(a,b) , (a&b)<=(a,b)
   XOR 
   propertises
   1.odd numbers 1 = 1
   2. same number er xor value = 0 hoi
   3. xor syntax ^
*/
// n size er array te n-1 ta element er protek a 2bar kore ase
//1ta unique oita print koro
/*
1. sort 
2. a[i]==a[i+1] then i+=2; else print i
3. 2nd method count array cnt[arr[i]]++;
4. array er protek element 2bar kore thakle tader xor fol =0
(1^3^1^3)=(1^1)^(3^3)=(0^0)=0 associativity rule
(1^3^1^3^4)=(1^1)^(3^3)^4=4
5. x^0=x


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int Xor=0;
    // sum korar time a 1 deya initialize
    // gun korar time a 0 deya initialize kora
    // xor korar time a 0 deya initialize kora
    for(int i=0;i<n;i++) Xor=(Xor^a[i]); //bracket deta hobe precidence kom
    cout<<Xor<<endl;
}

*/
// you are given a number n check if it is a power of 2 
//constrains testcases <=10^7 and n<=10^18
/*
2^4 =(binary representation)  =10000
2^4-1=(binary representation) =01111
(2^4)+(2^4-1)=           sum  =11111=(2^4 xor 2^4-1)
any number n if (n)^(n-1)==(n)+(n-1)= (2n-1) then its a 2^x=n;
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(2*n-1==(n^(n-1))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }  
}
*/
/* you are given an array of size n and u will have q quereies
you have to find the subarray xorsum of a sub array from l to r

a[l],a[l+1],a[l+2],......a[r]

c[r](cummilative xor)=a[1]^a[2]^a[3]......a[n];
cummilative xor from l to r = (a[1]^a[2]^a[3]....a[r])^(a[1],a[2],.....a[l-1])
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>a(n+1);
    for(int i=1; i<=n; i++)cin>>a[i];
    vector<int>xorr(n+1); 
    xorr[0]=0;
    for(int i=1;i<=n;i++) xorr[i]=(xorr[i-1]^a[i]);
    int q; cin>>q;
    while(q--){
        int L,R; cin>>L>>R;
        cout<<(xorr[R]^xorr[L-1])<<endl;
    }

}
*/

//bit set
// binary number er kon bit 1/0 ta hisab hobe shift operator deya
// left shift << 2 dya gun kora
// right shift >>(/) 2 deya vag kora
// 24 12 6
/* binary representation of a number using shifting operator*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=30;i>=0;i--){
        if((n&(1<<i)))cout<<1;
        else cout<<0;
    }
}
*/

// bitset holo vector er moto
// 
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // bitset<kotobit show korte chai
    int n; cin>>n;
    cout<<bs<<endl;
    // 1 thalke take zero korbo ar zero thakle tare 1 korbo
    //for(int i=0;i<32;i++) bs[i]=1-bs[i];
    //cout<<bs<<"\n";
    cout<<(bs<<3)<<"\n"; // sob bit 3 ghor bam e shift hobe
    cout<<bs.count()<<"\n";
}

// bit manipulation basics
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int i,j,k,m; cin>>i>>j>>k>>m;
    int on_mask=(1<<i);
    int off_mask=~(1<<j);
    int toggle_mask=(1<<k);
    int on_or_off_mask=1<<m;
    cout<<(n|on_mask)<<endl;
    cout<<(n&(off_mask))<<endl;
    cout<<(n^toggle_mask)<<endl;
    cout<<((m&&on_or_off_mask)==0? "false":"true")<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<int,int>mp;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        string s; cin>>s;
        v[i]=s;
    }
    int m; cin>>m;
    vector<string>skill;
    for(int i=0;i<m;i++){
        int p; cin>>p;
        for(int i=0;i<p;i++){
            string s; cin>>s;
            skill.push_back(s);
        }
    }
    int m; cin>>m;
    vector<pair<int,vector<string>>>v;
    for(int i=0;i<m;i++){
        int p; cin>>p;
        vector<string>temp;
        for(int j=0;j<p;j++){
            string s; cin>>s;
            temp.push_back(s);
        }
        v.push_back({p, temp});
        temp.clear();
    }
}
*/
#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main() {
    int n; cin>>n;
    vector<string>vv(n);
    for(int k=0;k<n;k++){
        string s; cin>>s;
        vv[k]=s;
    }
    int m;
    cin >> m;
    vector<pair<int, vector<string>>> v;

    for (int i = 0; i < m; i++) {
        int p;
        cin >> p;
        vector<string> temp;

        for (int j = 0; j < p; j++) {
            string s;
            cin >> s;
            temp.push_back(s);
        }

        v.push_back({ p, temp });
        temp.clear();
    }
    cout<<vv.size()<<endl;
    for(auto it:vv){
        cout<<it<<endl;
    }
    for(auto it:v){
        cout<<it.first<<endl;
        for(auto it2: it.second){
            cout<<it2<<endl;
        }
    }

    return 0;
}

