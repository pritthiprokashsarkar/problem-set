/* 
Write a program with a mother class Animal.Inside it define an age and a name and set_value function.
write two child classes zebra and dolphin show the information of zebra and dolphin
Then create two bases object Zebra & Dolphin which write a message telling the
age and the name and give some extra information (e.g place of orgin)
Hint:
zeb.set_data(10,n1);
dol.set_data(8,n2)
 */

/* 
#include<iostream>
#include<string.h>
using namespace std;
class animal
{
    protected:
    int age;
    string name;
    public: 
        void set_data(int a, string p)
        {
            age = a ; 
            name = p;
        }
};
class zebra : public animal
{
    public:
    void show_z()
    {
        cout<<"the name of zebra is "<<name<<endl;
        cout<<"the age is "<< age <<endl;
        cout<<"zebra is from kenya"<<endl;
    }
};
class dolphin : public animal
{
    public:
    void show_d()
    {
        cout<<"the name of dolphin is "<<name<<endl;
        cout<<"the age is "<< age <<endl;
        cout<<"dolphin is from australia"<<endl;
    }
};
int main()
{
    zebra objz;
    dolphin objd;
    string ss="pritthi_dolphin";
    string tt="pritthi_zebra";
    objz.set_data(10, ss);
    objz.show_z();
    objd.set_data(15, tt);
    objd.show_d();
}

 */



/* 
q2
write a program that create a class name student with one 
data member (Rollno) and two class member function that 
input and output Rollno using c++
 */
/* 
#include<bits/stdc++.h>
using namespace std;
class student
{
    protected:
    int roll;
    public:
    void setdata()
    {
        cout<<"enter your roll "<<endl;
        cin>>roll;
    }
    void getdata()
    {
        cout<<"roll number is :"<<roll<<endl;
    }
};
int main()
{
    student std;
    std.setdata();
    std.getdata();
} */



/*Q3.n This Video Learn How to Calculate Circle Area using polymorphism and virtual class
Object Oriented Programming | Calculate Area of Circle using C++ . */

/* 
#include<iostream>
using namespace std;
class shape{
    // shape er kono object create korbo na pointer create korbo
    protected:
    double r;
    public:
    virtual void get_data() = 0;
    virtual void display_area()=0;
};
class circle: public shape
{
    public:
    void get_data()
    {
        cout<<"enter radius of circle"<<endl;
        cin>>r;
    }
    void display_area()
    {
        cout<<".......area of circle.........."<<endl;
        double area=3.1416*r*r;
        cout<<"area of circle is "<<area<<endl;
    }
};
int main()
{
    circle c;

    // shape sh ;    dela hobe na karon virtual class er object banano jai na
    shape *sh;
    sh = &c;
    sh -> get_data();
    sh -> display_area();

}
 */


/* How to Calculate Rectangle Area */
/* 

#include<bits/stdc++.h>
using namespace std;
class shape{
    protected:
    int w,l;
    public:
    virtual void getdata()=0;
    virtual void displayarea()=0;
};
class Rectangle : public shape{
    public:
    void getdata(){
        cout<<"enter length of rectangle"<<endl;
        cin>>l;
        cout<<"enter width of rectangle"<<endl;
        cin>>w;
    }
    void displayarea()
    {
        cout<<"........area of the rectangle.........."<<endl;
        long long area = l*w;
        cout<<"area of the rectangle is : "<<area<<endl;
    }
};
int main()
{
    Rectangle r;
    shape *sh;
    sh = &r;
    sh -> getdata();
    sh -> displayarea();
}

 */


/*How to Calculate Area of Circle and Rectangle using C++*/
/* #include<bits/stdc++.h>
using namespace std;
class shape {
    // virtual class
    protected:
    double x,y,r;
    public:
    virtual void getdata()=0;
    virtual void displayarea()=0;
};

class circle: public shape
{
    public:
    void getdata()
    {
        cout<<"enter radius of circle"<<endl;
        cin>>r;
    }
    void displayarea()
    {
        cout<<".......area of circle.........."<<endl;
        double area=3.1416*r*r;
        cout<<"area of circle is "<<area<<endl;
    }
}; 
class Rectanglee : public shape{
    public:
    void getdata(){
        cout<<"enter length of rectangle"<<endl;
        cin>>x;
        cout<<"enter width of rectangle"<<endl;
        cin>>y;
    }
    void displayarea()
    {
        cout<<"........area of the rectangle.........."<<endl;
        long long area = x*y;
        cout<<"area of the rectangle is : "<<area<<endl;
    }
};
int main()
{
      /* Rectanglee rec ;  
      circle cr;
      shape *ptr=&rec;
      shape *ptrr=&cr;
      ptr -> getdata();
      ptr -> displayarea();
      ptrr -> getdata();
      ptrr -> displayarea(); */

      /*or
      circle cr;
      Rectanglee rect;
      // pointer er array
      shape *sh[2];
      sh[0]=&cr;
      sh[1]=&rect;
      sh[0]->getdata();
      sh[0]->displayarea();
      sh[1]->getdata();
      sh[1]->displayarea();

} */
/* 
write a class Book that contains the attribute bookID, book name and price.
It also contains member functions to input and show its attributes.
write another class Writer that contains the attributes writer name, address and number of books written by him.
It contains an array of Book object as its member.
The length of array should be 5 to store the data of five books.
It also contains member functions to input and display its attribute
 */
/* 
#include<bits/stdc++.h>
using namespace std;
class book
{
    private:
    int bookid;
    string bookname;
    float price;
    public:
    void getdata()
    {
        cout<<"enter book id"<<endl;
        cin>>bookid;
        cout<<"enter book name"<<endl;
        cin>>bookname;
        cout<<"enter price of the book"<<endl;
        cin>>price;
    }
    void printdata()
    {
        cout<<"the id of the book is :"<<bookid<<endl;
        cout<<"the name of the book is :"<<bookname<<endl;
        cout<<"the price of the book is"<<price<<endl;
    }

};
class writer{
    private:
    string name, address;
    book obj[5];
    public:
    void getdata()
    {
        cout<<"enter the name of the writer "<<endl;
        cin>>name;
        cout<<"enter the address of the writer "<<endl;
        cin>>address;
        cout<<"enter the name of the 5 books "<<endl;
        for(int i=1; i<=5; i++)
        {
            obj[i].getdata();
        }
    }
    void printdata()
    {
        cout<<"the name of the writer :"<<name<<endl;
        cout<<"the address of the writer :"<<address<<endl;
        cout<<"the name of the 5 books are ";
        for(int i=1; i<=5; i++)
        {
            obj[i].printdata();
        }
        cout<<endl;
    }
};
int main()
{
    writer obj;
    obj.getdata();
    obj.printdata();

} */

/* 
Write a class Teacher that contains the 
attribute teacher name, age and address. It also contains member function to 
inputdata and display its attributes.
Write another class Writer that contain the attribute writer name , 
address and number of books written by him. It also contains member function to 
inputdata and display its attribute.
 */
/* 
#include<bits/stdc++.h>
using namespace std;
class teacher
{
    private:
    string name;
    int age;
    string address;
    public:
    void getdata()
    {
        cout<<"enter the name of the teacher "<<endl;
        cin>>name;
        cout<<"enter the age of the teacher"<<endl;
        cin>>age;
        cout<<"enter the address of the teacher"<<endl;
        cin>>address;
    }
    void printdata()
    {
        cout<<"enter the name of the teacher "<<name<<endl;  
        cout<<"enter the age of the teacher"<<age<<endl;
        cout<<"enter the address of the teacher"<<address<<endl;
    }
};
class writer{
    private:
    string name, address;
    int numbook;
    public:
    void getdata()
    {
        cout<<"enter the name of the writer "<<endl;
        cin>>name;
        cout<<"enter the address of the writer "<<endl;
        cin>>address;
        cout<<"enter the num of books "<<endl;
        cin>>numbook;
    }
    void printdata()
    {
        cout<<"the name of the writer :"<<name<<endl;
        cout<<"the address of the writer :"<<address<<endl;
        cout<<"the num of the books :"<<numbook<<endl;
    }
};
class scholar : public teacher, public  writer{
    public:
    void getdata()
    {
        teacher::getdata();
        writer::getdata();
    }
    void printdata()
    {
        teacher::printdata();
        writer::printdata();
    }
};
int main()
{
    scholar s;
    teacher t;
    writer w;
    t.getdata();
    t.printdata();
    w.getdata();
    w.printdata();
    s.getdata();
    s.printdata();

} 
*/
/* 
write a class TV that contain attribute of Brand Name, Model & Retail Price.
write a constructor of TV class to initialize all attribute
Write a method to display all attribute and a method to change the attribute.
 */
/* 
#include<bits/stdc++.h>
using namespace std;
class tv
{
    private:
    string brandname;
    string model;
    int price;
    public:
    // parameter constructor
    tv(string a, string b, int c){
        brandname = a;
        model = b ; 
        price = c;
    }
    // method to change value
    void changevalue(string a, string b, int c)
    {
        brandname = a;
        model = b ; 
        price = c;
    }
    // method 
    void printdata()
    {
        cout<<"the brandname of tv is "<<brandname<<endl;
        cout<<"the model name of the tv is "<<model<<endl;
        cout<<"the price of the tv is "<<price<<endl; 
    }
};
int main()
{
    tv t("sony","76inch", 100000 );
    t.printdata();
    t.changevalue("walton","80inch",50000);
    t.printdata();
}
 */

/* 
Suppose there are two classes A & B.
You Want to drived a third class C from these (A and B) Two Class
which concept is required for this and how will you implement it through program?
 */
/* #include<bits/stdc++.h>
using namespace std;
/* propertise of constructor
1. class name ar constructor name same hoi
2. constuctor sob somoy public hoi
3. 
class a{
    public:
    a()
    {
        cout<<"class a.........."<<endl;
    }

};
class b{
    public:
    b()
    {
        cout<<"class b..............."<<endl;
    }
};
class c: public a, public b
{
    public:
    c()
    {
        cout<<"class c..........."<<endl;
    }

};
int main()
{
    c objc;

} */