#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
// all the global variables
char a;
double a1,b1,c1,a2,b2,c2;

void header(){
    cout<<"******************welcome*******************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"!!!!!!!!!!!!!!!!   Determine the angle between 2 stright line   !!!!!!!!!!!!!!!!"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"######  please follow the given instruction to proceed  ######"<<endl;
    cout<<endl;
    cout<<"press any character then enter to continue "<<endl;
    cin>>a;
    cout<<"^^^^^^^^^^   please enter coefficient and constant of a,b and c in the given format ax+by+c=0   ^^^^^^^^^^"<<endl;
    cout<<endl;
}
void first_eq(){
        //1st equation
    cout<<"enter the first equation in the format ax+by+c=0 "<<endl;
    cout<<endl;
    cout<<"enter the value of a= ";
    cin>>a1;
    cout<<"enter the value of b= ";
    cin>>b1;
    cout<<"enter the value of c= ";
    cin>>c1;
    cout<<"press enter to input the second equation"<<endl;
    cout<<endl;
}
void second_eq(){
    //2nd equation
    cout<<"enter the second equation in the format ax+by+c=0 "<<endl;
    cout<<endl;
    cout<<"enter the value of a= ";
    cin>>a2;
    cout<<"enter the value of b= ";
    cin>>b2;
    cout<<"enter the value of c= ";
    cin>>c2;
}
void solve(){
    //+ve sign
    double ans1 = (atan(((a2*b1-a1*b2)/(a1*a2+b1*b2)))*180)/PI;
    // -ve sign
    double ans2 = (atan((((-1)*(a2*b1-a1*b2))/(a1*a2+b1*b2)))*180)/PI;
    if(ans1<0){
        ans1=180+ans1;
    }
    if(ans2<0){
        ans2=180+ans2;
    } 
    cout<<endl;
    cout<<"the angle between the given stright lines are :"<<endl;
    cout<<"..............................................."<<endl;
    cout<<endl;
    cout<<ans1<<endl;
    cout<<endl;
    cout<<ans2<<endl;
}
int main(){
    header();
    first_eq();
    second_eq();
    solve();
}