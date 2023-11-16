#include<bits/stdc++.h>
using namespace std;
class a
{
    public:
    virtual void getdata()=0;
};
class b : public a
{
    public:
    void getdata()
    {
        cout<<"get value"<<endl;
    }
};
int main()
{
    a *h;
    b c;
    h = &c;
    h->getdata();
}