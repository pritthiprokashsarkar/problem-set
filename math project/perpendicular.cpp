#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
// all the global variables
char a;
double p,x;

void header(){
    cout<<"******************welcome*******************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"!!!!!!!!!!!!!!!!   equation of stright line whose perpendicular distance from orgin and angle of perpedicular line to x-axis is given   !!!!!!!!!!!!!!!!"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"######  please follow the given instruction to proceed  ######"<<endl;
    cout<<endl;
    cout<<"press any character then enter to continue "<<endl;
    cin>>a;
    cout<<"((((((((((please enter the perpendicular distance and positive angle to the x-axis))))))))))"<<endl;
    cout<<endl;
}
void solve(){
    cout<<"enter the perpendicular distance: ";
    cin>>p;
    cout<<"enter the angle in degree: ";
    cin>>x;
    x=(PI*x)/180;
    if(sin(x)>=0)
    cout<<"("<<cos(x)<<")"<<"x"<<" + "<<"("<<sin(x)<<")"<<"y = "<<p<<endl;
    else
    cout<<"("<<cos(x)<<")"<<"x"<<"("<<sin(x)<<")"<<"y = "<<p<<endl;

}
int main(){
    header();
    solve();
}