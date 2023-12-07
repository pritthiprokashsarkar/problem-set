#include<bits/stdc++.h>
using namespace std;
typedef double dl ;
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
dl dis(dl x1,dl y1,dl x2,dl y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(){
    optimize();
    fraction();
    int testcase; cin>>testcase;
    while(testcase--){
        dl px,py,ax,ay,bx,by;
        cin>>px>>py>>ax>>ay>>bx>>by;
        dl oa=dis(0,0,ax,ay),ap=dis(ax,ay,px,py);
        dl ob=dis(0,0,bx,by),bp=dis(bx,by,px,py);
        dl ab=dis(ax,ay,bx,by);
        dl ans=1e9;
        ans=min(ans, max(oa,ap));
        ans=min(ans,max(ob,bp));
        dl dis3=max({min(oa,ob),min(bp,ap),ab/2});
        cout<<min(ans,dis3)<<endl;
    }
}