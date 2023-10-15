/* #include<bits/stdc++.h>
using namespace std;
class number{
    int x,y;
    public:
    number(){x=0;y=0;} // default constructor
    number(int a,int b){ // parameterized constructor
        x=a;
        y=b;
    }
    void get(int &a,int &b){
        a=x;
        b=y;
    }
    void set(int a,int b){
        x=a;
        y=b;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
    // declaration of function
    // return type class + "operator" "operator name "+(2nd operator er class +object)
    number operator + (number obj); // declaraion

};
// defination of class
number number ::operator+(number obj){
    number temp; // temporary class toire hobe + operator er dan paser value return korar jonne
    // default vabe bam paser value return hobe
    temp.x=x+obj.x; // x deya 1st class er value niredesh kore
    temp.y=y+obj.y;
    return temp;
}
int main(){
    number n1,n2,n3;
    n2.set(10,20);
    n1.set(20,30);
    n3=n1+n2;
    n3.print();
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    //Complex(){img=0; real=0;}
    Complex(int i=0,int r=0){img=i; real=r;}
    // class er baire onno class neya kaj korar time a setter ar getter lagbe
    // ei khetre lagbe na set ar get function/ method
 //    void set(int i, int r){
 //       img=i;
 //       real=r;
 //   }
 //    void get(int &i, int &r) {
 //       i = img;
 //       r = real;
 //   } 
    void print(){
        cout<<real<<" "<<img<<endl;
    }
    Complex operator+(Complex const &obj) { // declaration na kore direct defination
    Complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return temp;
} // address pass kora lagbe
};


int main(){
    Complex c1(10,20),c2(20,30),c3;
    //c1.set(10,20);
    //c2.set(20,30);
    c3=c1+c2;
    c3.print();
}
 */
/* 
#include<bits/stdc++.h>
using namespace std;
class number{
    private:
    int x,y;
    public:
    number(){x=0;y=0;}
    number(int a,int b){x=a;y=b;}
    void get(int &a, int &b){
        a=x;
        b=y;
    }
    void set(int a,int b){
        x=a;
        y=b;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
    //1.void operator++(); // unary operator a kono parameter jabe na
    //number operator++(); preincrement er jonne
    number operator++(int a); //post increment er jonne
};
//number number::operator++(){ // preincrement operator 
number number::operator++(int a){ // post increment operator parameter pass korlei post increment
//2.void number::operator++(){
    number temp;
    x++; y++;
    temp.x=x+1;
    temp.y=y+1;
    return temp;
    //3. void number dela return type comment korbo
}
int main(){
    number n1(10,20),n2(20,30),n3(1,1);
    cout<<"before overload->"; n1.print();
    //++n1; preincrement
    cout<<"after overload->"; n1.print();
    n3=n1++; postincrement korle assign korte hobe
    n3.print(); 

}
 */

// pre increment
/* 
#include<bits/stdc++.h>
using namespace std;
class number{
    private:
    int x,y;
    public:
    number(){x=0;y=0;}
    number(int a,int b){x=a;y=b;}
    void get(int &a, int &b){
        a=x;
        b=y;
    }
    void set(int a,int b){
        x=a;
        y=b;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
    //1.void operator++(); // unary operator a kono parameter jabe na
    //number operator++(); preincrement er jonne
    number operator++(); //post increment er jonne
};
//number number::operator++(){ // preincrement operator 
number number::operator++(){ // post increment operator parameter pass korlei post increment
//2.void number::operator++(){
    number temp;
    x++; y++;
    temp.x=x+1;
    temp.y=y+1;
    return temp;
    //3. void number dela return type comment korbo
}
int main(){
    number n1(10,20),n2(20,30),n3(1,1);
    cout<<"before overload->"; n1.print();
    ++n1; //preincrement
    cout<<"after overload->"; n1.print(); 
} 

*/
/* 

#include<bits/stdc++.h>
using namespace std;
class number{
    private:
    int x,y;
    public:
    number(){x=0;y=0;}
    number(int a,int b){x=a;y=b;}
    void get(int &a, int &b){
        a=x;
        b=y;
    }
    void set(int a,int b){
        x=a;
        y=b;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
    number operator++(); 
    number operator++(int a);
};
number number::operator++(){ //preincrement
    number temp;
    x++; y++;
    temp.x=x;
    temp.y=y;
    return temp;
}
number number::operator++(int a){ // post increment
    number temp;
    temp.x=x;
    temp.y=y;
    x++;
    y++;
    return temp;
}
int main(){
    number n1(10,20),n2(20,30),n3(1,1),n4;
    cout<<"before overload->"; n1.print();
    //n3=++n1;
    n4=n1++;
    cout<<"after overload->"; n1.print(); 
    n3.print();
    n4.print();
} 

 */
/* 

#include<bits/stdc++.h>
using namespace std;
class counter{
    private:
    int cnt;
    public:
    counter(){
        cnt=0;
    }
    counter(int a){
        cnt=a;
    }
 //    void get(int &a, int &b){
 //       a=x;
 //       b=y;
 //   } 
    void set(int a){
        cnt=a;
    }
    void print(){
        cout<<cnt<<" "<<endl;
    }
    //overloading of preincrement operator
    void operator++(){
        cnt++;
    }
};

int main(void){
    counter c1,c2; // c1(20) parameterized constructor deya input deta hoile
    c1.set(20); // method use kore print korte hoile
    ++c1;
    c1.print();
}
 */
/* 

// function overriding 
///////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
class aa{
    public:
    void print(){
        cout<<"inside a"<<endl;
    }
};
class bb:public aa{ // inherit korte hoile public korte hobe
    public:
    void print(){
        cout<<"inside b"<<endl;
    }
};

int main(){
    aa obja;
    obja.print();
    bb objb;
    objb.print();

    // function overriding e base class er obj toire korle base class er method kaj korbe
    // derived class er obj toire krle derived class kaj korbe
}


/* 

#include<bits/stdc++.h>
using namespace std;
class aa{
    public:
    void print(){
        cout<<"Inside a"<<endl;
    }
};
class bb:public aa{
    public:
};
int main()
{
    aa obja;
    bb objb;
    obja.print();
    objb.print();
}
 */
/* 

// virtual function
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void print(){
    //void print(){ // virtual na likhle virtual class k access kora jabe na
        cout<<"inside a"<<endl;
    }
};
class derived1: public base{
    public:
    void print(){
        cout<<"inside 1"<<endl;
    }
};
class derived2: public base{
    public:
    void print(){
        cout<<"inside 2"<<endl;
    }
};
int main(){

    base *ptr; // pointer deya new object banano
    ptr = new derived1();
    ptr->print();
    ptr=new derived2();
    ptr->print();
    /* base *ptr; // base class er pointer
    base objbase;
    ptr=&objbase; // object er address thakbe pointer a
    ptr->print();

    derived objb;
    ptr=&objb;
    ptr->print(); 
} 
*/
/* 
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"inside base class print"<<endl;
    }
    virtual void show(){
        cout<<"inside base class show"<<endl;
    }
};
class derived1:public base{
    public:
    void print(){
        cout<<"inside derived class print"<<endl;
    }
    void show(){
        cout<<"inside derived class show"<<endl;
    }
};
int main(){
    //pointer banabo base class er

//    /* base *ptr;
//    ptr= new derived1();
//    ptr->print();
    
//    1 er base method access eta deya hoi na

    base *ptr;
    derived1 obj1;
    ptr=&obj1;
    ptr->print();
    ptr->show(); 
}
 */
/* 
#include<bits/stdc++.h>
using namespace std;
class A{
public:
void Print(){
cout<<"Inside Print A"<<endl;
}
void Show(){
cout<<"Inside Show A"<<endl;
}
};
class B:public A{
public:
void Print(){
cout<<"Inside Print B"<<endl;
}
void Show(){
cout<<"Inside Show B"<<endl;
}
};
int main(void) {
A *pa;
B b;
pa=&b;
pa->Print();
pa->Show();
} */
/* 


#include<bits/stdc++.h>
using namespace std;

class shape{
    public:
    virtual void getarea()=0;
};
class circle:public shape{
    public:
    void getarea(){
        cout<<"enter circle radius"<<endl;
        int r; cin>>r;
        cout<<"area of circle: ="<<(3.14*r*r)<<endl;
    }
};
class rectangle:public shape{
    public:
    void getarea()
    {
        cout<<"enter length and width to calculate area of rectangle"<<endl;
        int l,b;
        cin>>l;
        cin>>b;
        cout<<"area of rectangle is: "<<(l*b)<<endl;
    }

};
int main(){
    circle c1; 
    c1.getarea();
    rectangle r1;
    r1.getarea();
}
 */


// pure virtual function


/* 
#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
    virtual void eat()=0;

};
class dog: public animal{
    public:
    void eat(){
        cout<<"dog food"<<endl;
    }
};
class cat:public animal{
    public:
    void eat(){
        cout<<"cat food"<<endl;
    }
};
void show(animal *a){
    a->eat();
}
int main(){
    animal *ptr;
    dog d;
    ptr=&d;
    show(ptr);
    cat c;
    ptr=&c;
    show(ptr);
}
 */




/* 


protected access modifier
///////////////////////////////////////////////////




#include<bits/stdc++.h>
using namespace std;
class base{
    private:
    int pvt=1;
    protected:
    int prot=2;
    public:
    int pub=3;

    int get(){
        return pvt;
    }
};
// protected k access kora jai derived class deya inherit kore
class derived:public base{
        public:
        int getprot(){
            return prot;
        }
};  
int  main()
{
    derived obj;
    cout<<"private= "<<obj.get()<<endl;
    cout<<"protected= "<<obj.getprot()<<endl;
    cout<<"public ="<<obj.pub<<endl;
}

 */
/* 
// private access modifier
//////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
class Base {
private:
int pvt = 1;
protected:
int prot = 2;
public:
int pub = 3;
// function to access private member
int get() {
return pvt;
}
};
class ProtectedDerived : protected Base { // public access modifier tai private memebr access hobe na
public:
// function to access protected member from Base
int getProt() {
return prot;
}
// function to access public member from Base
int getPub() {
return pub;
}
};
int main() {
ProtectedDerived object1;
//cout<<object1.getPVT()<<endl;
cout << "Private cannot be accessed." << endl;
cout << "Protected = " << object1.getProt() << endl;
cout << "Public = " << object1.getPub() << endl;
return 0;
}

 */

// private access modifier
//////////////////////////////////////


/* #include<bits/stdc++.h>
using namespace std;
class Base {
private:
int pvt = 1;
protected:
int prot = 2;
public:
int pub = 3;
// function to access private member
int getPVT() {
return pvt;
}
};
class PrivateDerived : private Base { // inherit korse private access modifier deya
public:
// function to access protected member from Base
int getProt() {
return prot;
}
// function to access public member
int getPub() {
return pub;
}
};
int main() {
PrivateDerived object1;
//cout<<object1.getPVT()<<endl; private access modifier tai private member function k access kora jabe na
cout << "Private cannot be accessed." << endl;
cout << "Protected = " << object1.getProt() << endl;
cout << "Public = " << object1.getPub() << endl;
return 0;
}
 */

// different types of inheritance


// multilevel inheritance
///////////////////////////////////////////////////////////////





/* 
#include<bits/stdc++.h>
using namespace std;
class A { 
public:
void display() {
cout<<"Base class content.";
}
};
class B : public A {};
class C : public B {};
int main() {
C obj;
obj.display();
return 0;
} 
*/

// multiple inheritance
////////////////////////////////////////////////////////////





/* 
#include<bits/stdc++.h>
using namespace std;
class Mammal { 
public:
Mammal() {
cout << "Mammals can give direct birth." << endl;
}
};
class WingedAnimal {
public:
WingedAnimal() {
cout << "Winged animal can flap." << endl;
}
};
class Bat: public Mammal, public WingedAnimal {};
int main() {
// just ekta object toire korlei hobe
Bat b1;
return 0;
} 


*/

// hierarchical inheritance
////////////////////////////////////////////////////////////////////


/* #include<bits/stdc++.h>
using namespace std;
// base class
class Animal {
public:
void info() {
cout << "I am an animal." << endl;
}
};
// derived class 1
class Dog : public Animal {
public:
void bark() {
cout << "I am a Dog. Woof woof." << endl;
}
};
// derived class 2
class Cat : public Animal {
public:
void meow() {
cout << "I am a Cat. Meow." << endl;
}
};
int main() {
// Create object of Dog class
Dog dog1;
cout << "Dog Class:" << endl;
dog1.info(); // Parent Class function
dog1.bark();
// Create object of Cat class
Cat cat1;
cout << "\nCat Class:" << endl;
cat1.info(); // Parent Class function
cat1.meow();
return 0;
}
 */




//  hybrid inheritance
///////////////////////////////////////////////////////////



/*
class b ar class c , a class thke inherit kortese
abr class d inherit kortese class b ar class c thke
class d er show function call korle eta class b theke abr class c thekeo call hobe
etai ambiguity

class A {
public:
void show()
{
cout << "Hello form A \n";
}
};
class B : public A {
};
class C : public A {
};
class D : public B, public C {
};
int main()
{
D d;
d.show();
}

*/


// hybrid inheritance
///////////////////////////////////////////////////////////


/* 
#include<bits/stdc++.h>
using namespace std;
class aa{
    protected:
    int x;
};
class bb: public aa{
    public:
    bb(){
        cout<<"b constructor is called"<<endl;
        x=1;
    }
};
class cc: public aa{
    public:
    cc(){
        cout<<"c constructor is called"<<endl;
        x=2;
    }
};
class dd: public bb, public cc{
    public:
    void getx(){
        // kon class theke x er value nebe confused hoye jabe tai scope resolution operator
        cout<<"x= "<<bb::x<<endl;
        cout<<"x= "<<cc::x<<endl;
    }
};
int main(){
    dd objd;
    objd.getx();
}
 */


// another solution hoilo virtual class use kora
/////////////////////////////////////////////////////////////////////////////

/* 

#include<iostream>
using namespace std;
class A{
protected:
// protected karon protected member function k inherit kore use kora jai
int x;
};
class B: virtual public A{
public:
B(){
cout<<"B constructor is called"<<endl;
x=1;
}
};
class C: virtual public A{
public:
C(){
cout<<"C constructor is called"<<endl;
x=2;
}
};
class D:public B,public C{
public:
void getX(){
    // last jeta modify kora hoise oitai output debe
cout<<"x="<<x;
}
}; int main()
{
D d;
d.getX();
} 

*/

// virtual class er example

/* 
#include <iostream>
using namespace std;
class A {
public:

A(){
cout<<"Constructor A"<<endl;
}
void show()
{
cout << "Hello form A \n";
}
};
class B : public virtual A {
public:
B(){
cout<<"Constructor B"<<endl;
}
};
class C : public virtual A {
public:
C(){
cout<<"Constructor C"<<endl;
}
};

class D : public B, public C {
public:
D(){
cout<<"Constructor D"<<endl;
}
};
int main()
{
// object toire korlei sob gula default constructor execute hobe
D d;
}

 */
// virtual classs extra hard topic pore bujbo
//////////////////////////////////////////////////////////////


/* 
#include <iostream.h>
using namespace std;

class A{

protected:
int ax;

public:
void setA(int x)
{ 
    ax=x;
}
};
class B : virtual public A{
protected:
int bx;
public:
void setB(int x){ bx=x; }
};
class C : virtual public A{
protected:
int cx;
public:
void setC(int x){ cx=x; }
};
class P:public C, public B{
public:
int volume(){ return ax*bx*cx; }
};
int main(void){
P p;
p.setA(2); p.setB(3); p.setC(4);
cout<<“volume="<<p.volume()<<" ";
} 

*/


// normal class example
///////////////////////////////////////////////////////


/* 
#include <iostream>
using namespace std;
class Rectangle{
private:
int height;
int width;
public:
void SetData(int h,int w){
height=h;
width=w;
}
void Display(){
cout<<"Height="<<height<<" Weight="<<width;
}
};
int main()
{
Rectangle r1,r2;
r1.SetData(3,4);
r1.Display();
return;
} */




// destructor
///////////////////////////////////////////////////////



/* 
#include<bits/stdc++.h>
using namespace std;
class Test{
public:
Test(){
cout<<"Constructor is called"<<endl;
}
// destructor call kora hoi object k destroy korar jonne

~Test(){
cout<<"Destructor is called"<<endl;
}
};
void CreateObj(){
Test t1,t2;
cout<<"Inside the CreateObj()"<<endl;
}
int main()
{
CreateObj();
return 0;
} */



// static data memeber
////////////////////////////////////////////////

/* 


#include <iostream>
using namespace std;
class Base{
int x;
static int y;
public:
Base(int X){
x=X;
y++;
}
// static data memeber access korar jonne statix method
static int getY(){ return y;}
};
// static data memeber er value thik kore deya outside class
int Base::y=0;
int main()
{
Base c1(10),c2(20);
cout<<Base::getY();
return 0;
} */



// passing object as parameter
/////////////////////////////////////////////////////////////////




// extra hard
/* 
#include <iostream>
using namespace std;
class Ball{
private:
int s;
public:
Ball(){}
Ball(int x){
s=x;
}
// pointer deya value passing mukhosto
void AvgSpeed(Ball *b){
cout<<(s+b->s)/2;
}
};
int main()
{
Ball b1(130),b2(140);
b1.AvgSpeed(&b2);
return 0;
} */

// oject as function return 
/* 
#include <iostream>
using namespace std;
class Ball{
private:
float s;
public:
Ball(){}
Ball(int x){
s=x;
}
float GetSpeed (){
return s;
}
// mukhosto
Ball AvgSpeed(Ball *b){
Ball t;
t.s=s+b->s;
return(t);
}
};
int main()
{
Ball b1(130),b2(140);
Ball k;
k=b1.AvgSpeed(&b2);
cout<<k.GetSpeed()/2;
return 0;
} */

// copy constructor
//extra hard
/* 

#include <iostream>
using namespace std;
class Ball{
private:
float s;
public:
Ball(){}
Ball(int x){
s=x;
}
Ball(Ball &b){
s=b.s;
}
float GetSpeed (){
return s;
}
};
int main()
{
Ball b1(150);
Ball b2(&b1);
cout<<b2.GetSpeed();
return 0;
} */
// friend function

/* 
#include <iostream>
using namespace std;
class Test{
private:
int n;
public:
Test(int x){
n=x;
}
friend void show(Test t); // declaration of friend function inside class
};
// defination of friend function
void show(Test t){ //
cout<<"n="<<t.n; // test class er ekta object deya access
}
int main()
{
Test p(10);
show(p);
return 0;
} 

*/

// example of friend function


/* 
#include <iostream>
using namespace std;
class B; //forwrad declaration
class A{
private:
int n;
public:
A(int x){
n=x;
}
friend void Add(A,B); // function declaration
};
class B{
private:
int n;
public:
B(int x){
n=x;
}
friend void Add(A,B);
};
void Add(A a,B b){ // friend function parameter hisabe object k nebe
cout<<"Sum="<<a.n+b.n;
}
int main()
{
A oa(10);
B ob(20);
Add(oa,ob);
return 0;
} */