/* #include<bits/stdc++.h>
using namespace std;
class base{
    private:
    int pvt=10;
    protected:
    int prt=20;
    public:
    int pub=30;
    int getpvt(){
        return pvt;
    }
};
class derived:public base{
    public:
    int getprt(){
        return prt;
    }
};
int main(){
    derived obj1;
    cout<<obj1.pub<<endl;
    cout<<obj1.getprt()<<endl;
    cout<<obj1.getpvt()<<endl;
} */
/* #include<bits/stdc++.h>
using namespace std;
class a{
    public:
    int sum(int a, int b){
        return a+b;
    }
    double sum(double a, double b){
        return a+b;
    }
};
int main(){
    a obj;
    int d=obj.sum(10,20);
    cout<<d<<endl;
    cout<<obj.sum(10.2,20.3)<<endl; 
} */
// operator overloading
/* #include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
        Complex(int i=0, int r=0){
        real=r;
        img=i;
    }
    Complex operator +(Complex const &obj){
        Complex temp;
        temp.img=img+obj.img;
        temp.real=real+obj.real;
        return temp;
    }
    void print(){
        cout<<real<<"+i"<<img<<endl;
    }
};
int main(){
    Complex obj1(10,20),obj2(10,20);
    Complex obj3=obj1+obj2;
    obj3.print();
} */
/* 
#include<bits/stdc++.h>
using namespace std;
class momplex{
    private:
    int real,img;
    public:
    momplex(int i=0,int r=0){
        real=r;
        img=i;
    }
    momplex operator + (momplex const &obj){
        momplex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
    void print(){
        cout<<real<<"+i"<<img<<endl;
    }
};
int main(){
    momplex obj1(10,20),obj2(20,10),obj3;
    obj3=obj1+obj2;
    obj3.print();
} */
// unary operator overloading 
/* #include<bits/stdc++.h>
using namespace std;
class unary{
    private:
    int count;
    public:
    unary(){
        count=10;
    }
    int getdata(){
        return count;
    }
    void operator++(){
        count++;
    }
};
int main(){
    unary obj1;
    ++obj1;
    cout<<obj1.getdata()<<endl;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
class unary{
    private:
    int count;
    public:
    unary(){
        count=10;
    }
    int print(){
        return count;
    }
    unary operator++(){
        count++;
    }
};
int main(){
    unary obj1;
    cout<<"before unary operator overloading "<<obj1.print()<<endl;
    ++obj1;
    cout<<"after unary operator overloading "<<obj1.print()<<endl;
} */

// function overriding__> confusion
/* #include<bits/stdc++.h>
using namespace std;
class a{
    public:
    virtual void print(){
        cout<<"inside a print"<<endl;
    }
    void show(){
        cout<<"inside a show"<<endl;
    }
};
class b: public a{
    public:
    void print(){
        cout<<"inside b print"<<endl;
    }
    void show(){
        cout<<"inside b show"<<endl;
    }
};
int main(){
    a *pt;
    b obj1;
    pt=&obj1;
    pt->print(); 

} */
// pure virtual function
/* 
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void print()=0;
    // fucntion er defination jani na tai pore 
};
class rectangle: public base{
    public:
    void print(){
        cout<<"enter the length and width of the rectangle"<<endl;
        int l,b; cin>>l>>b;
        cout<<"area of the rectangle is "<<l*b<<endl;
    }
};
class circle: public base{
    public:
    void print(){
        cout<<"area of the circle is "<<endl;
        int r; cin>>r;
        cout<<3.1416*r*r<<endl;
    }
};
int main(){
    rectangle obj1;
    obj1.print();
    circle obj2;
    obj2.print();
}
 */
/* #include<bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void print()=0;
};
class rectangle:public base{
    public:
    void print(){
        cout<<"area of the rectangle is :"<<endl;
        int l,b; cin>>l>>b;
        cout<<l*b<<endl;
    }
};
class circle:public base{
    public:
    void print(){
        cout<<"area of the circle is"<<endl;
        int r; cin>>r;
        cout<<3.1416*r*r<<endl;
    }
};
int main(){
    circle obj1; 
    obj1.print();
}    */

// friend function
/* #include<bits/stdc++.h>
using namespace std;
class base{
    private:
    int rec;
    public:
    base(){
        rec=10;
    }
    void print(){
        cout<<"ans is "<<rec<<endl;
    }
    friend void add(base &d);
};
void add(base &d){
    d.rec=d.rec+5;
}

int main(){
    base obj1;
    obj1.print();
    add(obj1);
    obj1.print();
} */
/* #include<bits/stdc++.h>
using namespace std;
class base{
    private:
    int rec;
    public:
    base(){
        rec=10;
    }
    void print(){
        cout<<"ans is "<<rec<<endl;
    }
    friend void add(base &d);    
};
void add(base &d){
    d.rec=d.rec+10;
}
int main(){
    base obj1;
    obj1.print();
    add(obj1);
    obj1.print();
} */
/* 
#include<bits/stdc++.h>
using namespace std;
class base{
    private:
    int pvt=10;
    public:
    int pub=20;
    protected:
    int prot=30;
    int getpvt(){
        return pvt;
    }
};
class derived:public base{
    public:
    int getprot(){
        return prot;
    }
};
int main(){
    derived obj1;
    cout<<obj1.pub<<endl;
    cout<<obj1.getprot()<<endl;
    //cout<<obj1.getpvt()<<endl;
} */
/* #include<bits/stdc++.h>
using namespace std;
class base{
    private:
    int pvt=10;
    protected:
    int prt=20;
    public:
    int pub=30;
    int getpvt(){
        return pvt;
    }
};
class derived:public base{
    public:
    int getprt(){
        return prt;
    }
};
int main(){
    derived obj1;
    cout<<obj1.getprt()<<endl;
    cout<<obj1.pub<<endl;
    cout<<obj1.getpvt()<<endl;
    
} */

/* #include<bits/stdc++.h>
using namespace std;
class base{
    private:
    int pvt=10;
    protected:
    int prt=20;
    public:
    int pub=30;
    int getpvt(){
        return pvt;
    }
};
class derived:protected base{
    public:
    int getprt(){
        return prt;
    }
    int getpub(){
        return pub;
    }
};
int main(){
    derived obj1;
    cout<<obj1.getprt()<<endl;
    //cout<<obj1.pub<<endl;
    //cout<<obj1.getpvt()<<endl;
    cout<<obj1.getpub()<<endl;
    
} */
/* #include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int pub=10;
    protected:
    int prt=20;
    private:
    int pvt=30;
    int getpvt(){
        return pvt;
    }
};
class derived:protected base{
    public:
    int getprt(){
        return prt;
    }
    int getpub(){
        return pub;
    }
};
int main(){
    derived obj1;
    //cout<<obj1.getpvt()<<endl;
    //cout<<obj1.pub<<endl;
    cout<<obj1.getpub()<<endl;
    cout<<obj1.getprt()<<endl;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int pub=10;
    protected:
    int prt=20;
    private:
    int pvt=30;
    int getpvt(){
        return pvt;
    }
};
class derived:private base{
    public:
    int getprt(){
        return prt;
    }
    int getpub(){
        return pub;
    }
};
int main(){
    derived obj1;
    //cout<<obj1.getpvt()<<endl;
    //cout<<obj1.pub<<endl;
    cout<<obj1.getpub()<<endl;
    cout<<obj1.getprt()<<endl;
}
 */
/* 
// multilevel inheritance
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    void print(){
        cout<<"base class"<<endl;
    }
};
class child1:public base{
    public:
    void print(){
        cout<<"child1 class"<<endl;
    }
};
class child2:public child1{
    public:
    
};
int main(){
    child2 obj1;
    obj1.print(); 
} */

//multiple inheritance
/* 
#include<bits/stdc++.h>
using namespace std;
class base1{
    public:
    base1(){
        cout<<"i am spiderman"<<endl;
    }
};
class base2{
    public:
    base2(){
        cout<<"i am ironman"<<endl;
    }
};
class derived:public base1,public base2{

};
int main(){
    derived obj1;
    
} */
// hierarchial inheritance
/* #include<bits/stdc++.h>
using namespace std;
class base{
    public:
    void print(){
        cout<<"graphics card"<<endl;
    }
};
class derived1:public base{
    public:
    void show(){
        cout<<"gtx 1060"<<endl;
    }
};
class derived2:public base{
    public:
    void show(){
        cout<<"rx 580"<<endl;
    }
};
int main(){
    cout<<"derived class 1"<<endl;
    derived1 obj1;
    obj1.print();
    obj1.show();
    derived2 obj2;
    cout<<"derived class 2"<<endl;
    obj2.print();
    obj2.show();

} */

// calling order of the constructor and destructor
/* 
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    base(){
        cout<<"default constructor in base class"<<endl;
    }
    base(int a){
        cout<<"parameterized constructor in base class "<<a<<endl;
    }
    ~base(){
        cout<<"destructor in base class"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"default constructor in derived class"<<endl;
    }
    derived(int a,int b):base(a){
        cout<<"parameterized constructor in derived class "<<b<<endl;
    }
    ~derived(){
        cout<<"destructor in derived class"<<endl;
    }
};
int main(){
    base obj1;
    cout<<endl;
    base obj2(10);
    cout<<endl;
    derived obj3;
    cout<<endl;
    derived obj4(10,20);
    cout<<endl;

    
} */

// ekta hoilo virtual function arekta hoilo virtual function
// virtual class dela parent class er default constuctor call hoina
/* 
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    base(){
        cout<<"constructor in base class "<<endl;
    }
};
class derived1:public virtual base{
    public:
    derived1(){
        cout<<"constructor in derived class 1"<<endl;
    }
};
class derived2:public virtual base{
    public:
    derived2(){
        cout<<"constuctor in derived class 2"<<endl;
    }
};
class bass:public derived1,public derived2{
    public:
    bass(){
        cout<<"constructor in bass class "<<endl;
    }
};
int main(){
    bass obj1;
}
 */
/* #include<bits/stdc++.h>
using namespace std;
class parent{
    parent(){
        protected:
        int ax;
        public:
        void geta(int a){
            ax=a;
        }
    }
};
class child1: public parent{
    protected:
}
int main(){

} */
/* 
#include<bits/stdc++.h>
using namespace std;
class employee{
    private:
    string ename;
    public:
    employee(string s){
        ename=s;
    }
    string print(){
        return ename;
    }
    ~employee(){
        cout<<"employee is closed"<<endl;
    }
};
class company{
    private:
    string cname;
    public:
    string s;
    employee *emp;
    company(string s, employee *e){
        
    }
}
int main(){

} */