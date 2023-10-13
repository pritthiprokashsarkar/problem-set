#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a; 
    unsigned long long int b;
    cin>>a>>b;
    int bdigit=0;
    //string temp="";
    string ans="";
    
    unsigned long long int k=0,cnt=1;
    unsigned long long int num=0,temp;
    for(int i=0; i<a.size(); i++)
    {
        if(i==0) 
        {
            temp=a[i]+'0'+0;
            continue;
        }
        if(k==1)
        {
           // temp+=a[i];
            temp = temp*10;
            temp = temp + (a[i]+'0'+0);
            k=0;
        }
        //num = temp;
        if(num/b==0)
        {
            num = num%b;
            k=1;
            temp=num;   
        }
        else
        {
            long long a = stoi(temp);
            temp="";
            num = a%b;
            temp += num+0+'0';
            k=1;
        }
    }
    if(num==0) cout<<"divisible"<<endl;
    else cout<<"not divisible"<<endl;

}