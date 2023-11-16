/*........ polymorphism..........*/

/*How to Declare Pointer Object in C+*/


/* #include<bits/stdc++.h>
using namespace std;
class parent{
     public:
        void show()
        {
            cout<<"this is show method of public class"<<endl;
        }
};
int main()
{
    parent *ptr; //pointer type object
    ptr = new parent; // pointer k object deya initialized
    // eita holo pointer er object toire kora
    ptr->show();
} */



/*Array of Pointer to Objects in C++ */

/* #include<bits/stdc++.h>
using namespace std;
class parent{
    public:
    void show(){
        cout<<"this is method of parent class"<<endl;
    }
};
int main()
{
    parent *ptr[5]; 
    for(int i=0; i<5; i++)
    {
        ptr[i] = new parent;
        ptr[i]->show();
    }
} */

/* 
output:
this is method of parent class
this is method of parent class
this is method of parent class
this is method of parent class
this is method of parent class
 */


/*......virtual functions.........*/



/* 
#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    void show()
    {
        cout<<"this is person show method"<<endl;
    }
};

class employee : public person{ // publically inherit
    public :
    void show()
    {
        cout<<"this is employee show method"<<endl;
    }
};

class prog: public employee
{
    public: 
    void show()
    {
        cout<<"this is prog show method"<<endl;
    }
};

int main()
{
    person objperson;
    employee objemployee;
    prog objprog;
    person *ptr;
    ptr = &objprog;
    ptr -> show();
    ptr = &objemployee;
    ptr ->show();
    ptr = &objprog;
    ptr -> show();
} */

/* 
output: // base class er function call hobe just
this is person show method
this is person show method
this is person show method
 */




/*ei somossa somadhan hobe base class ta k virtul banai*/
/* 
#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    virtual void show()  //base class ta  k virtual banate hobe
    {
        cout<<"this is person show method"<<endl;
    }
};

class employee : public person{ // publically inherit
    public :
    void show()
    {
        cout<<"this is employee show method"<<endl;
    }
};

class prog: public employee
{
    public: 
    void show()
    {
        cout<<"this is programmer show method"<<endl;
    }
};

int main()
{
    person objperson;
    employee objemployee;
    prog objprog;
    person *ptr;
    ptr = &objperson;
    ptr -> show();
    ptr = &objemployee;
    ptr ->show();
    ptr = &objprog;
    ptr -> show();
}
 */
/*
output
this is person show method
this is employee show method
this is programmer show method
*/

/*Early and Late Binding in C++ 43 no video*/


/*Pure Virtual Function and Abstract Classes in C++*/
/*
#include<bits/stdc++.h>
using namespace std;
class person{  // virtual function person class a defined tai person holo abstract class 
    public:
    virtual void show() = 0; //pure virtual function
};

class employee : public person{
    public:
    void show()
    {
        cout<<"this is employee method"<<endl;
    }
};
class teacher : public employee
{
    public:
    void show()
    {
        cout<<"this is teacher class method"<<endl;
    }
};
int main()
{
    /* person obj;
    error debe karon eita abstract class er pointer declare kora jabe obj na 

    person *ptr[2];
    ptr[0] = new employee;
    ptr[1] = new teacher;
    ptr[0] ->show();
    ptr[1] ->show();
}

output
this is employee method
this is teacher class method
 */


/*Generic Programming in C++ and Templates*/
/* 
#include<bits/stdc++.h>
using namespace std;

template<class T>
T mymax( T n , T m)
{
    if(n>m) return n;
    else return m;
}
template<class A>
void myprint( A a)
{
    cout<<a<<endl;
}
int main()
{
    char r = mymax('a','z');

    cout<<r<<endl;
    myprint(6);
    myprint("pritthi");
}
 */

/*........Class Templates in C++........*/
/* 
#include<bits/stdc++.h>
using namespace std;
template<class Type>
class test
{
    private:
    Type n;
    public:
    void getvalue()
    {
        cin>>n;
    }
    void print()
    {
        cout<<"you entered "<<n<<endl;
    }
};
int main()
{
    test<int>objint;
    cout<<"enter integer value "<<endl;
    objint.getvalue();
    objint.print();
    test<string>objstring;
    cout<<"enter string value"<<endl;
    objstring.getvalue();
    objstring.print();
}
 */


/*..........Exception Handling in C++..............*/

/* 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q=0;
    try{
    cin>>a>>b;
    if(b==0)
    {
        throw  0;
    }
    q = a/b;
    cout<<q<<endl;
    }
    catch(int)
    {
        cout<<"cant divided by zero ";
    }
}

 */

/*............operator overloading in c++.................*/

/* #include<bits/stdc++.h>
using namespace std; 
class test{
    public:
        void getvalue()
        {
            cout<<"enter number :";
            cin>>n;
        }
        void operator +(test obj)
        {
            test t;
            t.n = n + obj.n;
            cout<<"the addition is :"<<t.n<<endl;
        }
        void operator -(test obj)
        {
            test t;
            t.n = n - obj.n;
            cout<<"the subtraction is "<<t.n<<endl;
        }
    private:
        int n;
    
};

int main()
{
    test obj1,obj2;
    cout<<"enter the data of object 1 ";
    obj1.getvalue();
    cout<<"enter the data of object 2 ";
    obj2.getvalue();
    //operator overloading
    obj1+obj2;
    obj1-obj2;
} */


/*Increment & Decrement Operator Overloading in C++*/
/* 
#include<bits/stdc++.h>
using namespace std;
class test{
    public:
        //constructor
        test():n(0) // n er value 0 deya initialize hobe main e initialize korar time
        {

        }
        void operator ++()
        {
            n++;
        }
        void show()
        {
            cout<<"the value of n:"<<n<<endl;
        }
        void operator --()
        {
            n--;
        }
    private:
    int n;
};
int main()
{
    test obj1;
    ++obj1;
    obj1.show();
    --obj1;
    obj1.show();
}

 */


// post increment korar jonne


/* 
#include<bits/stdc++.h>
using namespace std;
class test{
    public:
        //constructor
        test():n(0) // n er value 0 deya initialize hobe main e initialize korar time
        {

        }
        void operator ++() // pre increment korar jonne
        {
            n++;
        }
        void operator ++(int) // post increment er jonne 
        {
            n++;
        }
        void operator --(int) // post increment er jonne 
        {
            n--;
        }
        void show()
        {
            cout<<"the value of n:"<<n<<endl;
        }
        void operator --()
        {
            n--;
        }
    private:
    int n;
};
int main()
{
    test obj1;
    ++obj1;
    //post increment
    obj1++;
    obj1.show();
    --obj1;
    obj1--;
    obj1.show();
} 
*/


/*.............operator overloading ..............*/

/* #include <iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inch;
    public:
        Distance():feet(0), inch(0) { // eita default constructor feet ar inch 0 deya initialize

        }
        Distance(int fe, float in)  : feet(fe), inch(in)
        {

        } 
        void display()
        {
            cout<<"feet = "<<feet<<" inches = "<<inch<<endl;
        }
        //pre increment
        void operator ++()
        {
            feet++;
            inch++;
        }
        // post increment
        void operator ++(int)
        {
            feet++;
            inch++;
        }
        // decrement korar jonneo same
        void operator --()
        {
            feet--;
            inch--;
        }
        // post decrement
        void operator--(int)
        {
            feet--;
            inch--;
        }
};
int main()
{
    Distance d1(3,6.8);
    Distance d2(5,7.4);
    Distance d3(4,10.5);
    cout<<"before increment"<<endl;
    d1.display();
    ++d1;
    cout<<"after increment"<<endl;
    d1.display();

    cout<<"value of d2 before post increment"<<endl;
    d2.display();
    d2++;
    cout<<"value of d2 after post increment"<<endl;
    d2.display();

    cout<<"before postdecrement"<<endl;
    d3.display();
    d3--;
    cout<<"after postdecrement"<<endl;
    d3--;
    d3.display();

    cout<<"after predecrement"<<endl;
    --d3;
    d3.display();

} */

/* 
#include <iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inch;
    public:
        Distance():feet(0), inch(0) { // eita default constructor feet ar inch 0 deya initialize

        }
        Distance(int fe, float in)  : feet(fe), inch(in)
        {

        } 
        void display()
        {
            cout<<"feet = "<<feet<<" inches = "<<inch<<endl;
        }
        //pre increment
        Distance operator ++()
        {
            
            return Distance(++feet,++inch);
        }
        // post increment
        Distance operator ++(int)
        {
            return Distance(feet++,inch++);
        }
        // decrement korar jonneo same
        void operator --()
        {
            feet--;
            inch--;
        }
        // post decrement
        void operator -- (int)
        {
            feet--;
            inch--;
        }
};
int main()
{
    Distance d1(3,6.8);
    Distance d2(5,7.4);
    Distance d3,d4;
    cout<<"before assignment"<<endl;
    d3.display();
    d4.display();
    d3 = ++d1;
    d4 = d2++;
    cout<<"after assignment"<<endl;
    d3.display();
    d4.display();

} */


/*Operator Overloading With Return Value in C++*/



/*...............overriding member functions............*/
#include<iostream>
using namespace std;
int main()
{

}

 





