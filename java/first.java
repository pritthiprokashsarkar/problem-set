//import java.util.Scanner;
// input neyar jonne
/* 
public class first {
    public static void main(String[] args){
       Scanner scan = new Scanner(System.in);
       int a=scan.nextInt();
       int b=scan.nextInt();
       int s=a+b;
       System.out.println("sum= "+s);
    }
    
}
*/
// next method deya scanner
/* 
public class first {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your name ");
        System.out.println("your name is "+input.next());
    }
    
}
*/

// array
/* 
public class first {
    public static void main(String[] args){
       int []ax=new int[5];
       ax[0]=10; ax[1]=20;
       for(int i=0;i<5;i++){
        System.out.println(" "+ax[i]);
       }
    }
    
}
*/

// array pass by reference
/* 
public class first {
    public static void main(String[] args){
       int[] num={1,2};
       change(num);
       print(num);
    }
    public static void change(int[]num){
        num[0]=10;
        num[1]=20;
    }
    public static void print(int[]num){
        for(int i=0;i<num.length;i++){
            System.out.print(num[i]+" ");
        }
    }
}
*/

// anonymous object
//package CSE1203;
/* 
import java.awt.Point;
public class First {
public static void main(String[] args) {
Point p=getPoint();
System.out.println("p="+p);
}
private static Point getPoint() {
return new Point(1,2); //annonymous object
}
}
 */
// array of anonymous object
/* 
public class first{
    public static void main(String[] args){
        int []num=getnumber();
        printarr(num);
    }
    public static int[] getnumber(){
        return new int[] {1,2,3,4,5,10};
    }
    public static void printarr(int[]num){
        for(int i=0;i<num.length;i++){
            System.out.print(" "+num[i]);
        }
    }
}

*/

// array sort method
/* 
import java.util.Arrays;
public class first{
    public static void main(String[] args) {
        int []num={10,20,30,40};
        System.out.println("initial array");
        print(num);
        System.out.println("");
        System.out.println("sorted array");
        Arrays.sort(num);
        print(num);
    }
    public static void print(int[]num){
        for(int i=0;i<num.length;i++){
            System.out.print(" "+num[i]);
        }
    }
}
*/

// binary search method
/* 
import java.util.Arrays;
public class first{
    public static void main(String[] args) {
        int []num={100,90,30,80,20};
        System.out.println("initial array");
        print(num);
        System.out.println("");
        System.out.println("sorted array");
        Arrays.sort(num);
        print(num);
        int i=Arrays.binarySearch(num,30);
        System.out.println("");
        System.out.println("index of the founded element "+i);
    }
    public static void print(int[]num){
        for(int i=0;i<num.length;i++){
            System.out.print(" "+num[i]);
        }
    }
}
*/

// autofill
/* 
import java.util.Arrays;
public class first{
    public static void main(String[] args){
        int [] num=new int[10];
        Arrays.fill(num,3);
        for(int i=0;i<num.length;i++){
            System.out.print(" "+num[i]);
        }
    }
}
*/
/* 
// variable length parameter
import java.util.Arrays;
public class first{
    public static void main(String[] args){
        int []ax={10,20,30,40,50,60};
        System.out.println(sum(1,2,3));
        System.out.println(sum(1,2,3,4));
        System.out.println(sum(ax));
    }
    public static int sum(int...ax){
        int s=0;
        for(int i=0;i<ax.length;i++){
            s=s+ax[i];
        }
        return s;
    }
}
*/

// toString
/////////////////////////////////////////////////////
/* 

import java.util.Arrays;
public class first{
    public static void main(String[] args){
        int [] ax={10,20,30,40,60,50};
        System.out.println(Arrays.toString(ax));
    }
}

*/
/* 
import java.util.Arrays;
public class first{
    public static void main(String[] args){
        int [] ax={10,20,30,40,60,50};
        System.out.println(Arrays.toString(ax));
    }
}
*/
/* 
stl
///////////////////////////////////////
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
public class first{
    public static void main(String[] args){
        ArrayList<String> fruits= new ArrayList<>();
        fruits.add("apple");
        fruits.add("mango");
        fruits.add("orange");
        System.out.println(fruits); // array er sob element print kora
        System.out.println(fruits.get(1)); //1 index er value print kora
        fruits.set(1,"lichi");
        System.out.println(fruits);
        //fruits.remove(2);
        System.out.println(fruits);
        // delete by value
        //fruits.remove("apple");
        System.out.println(fruits);
        // string hisabe print kora
        System.out.println(fruits.toString());
        // total size print kora
        System.out.println(fruits.size());
        // sorting 
        fruits.sort(null);
        System.out.println(fruits);
        fruits.clear(); // sob element delete korar jonne
        System.out.println(fruits);
    }
}
*/

// for each loop
/////////////////////////////////////////
/* 
import java.util.ArrayList;
import java.util.Arrays;
public class first{
    public static void main(String[] args){
        ArrayList<String>fruits=new ArrayList<>();
        fruits.add("orange");
        fruits.add("mango");
        fruits.add("apple");
        for(String it: fruits){
            System.out.print(" "+it);
        }
    }
}
*/

// class and object

/* 
import java.awt.Point;
public class first{
    public static void main(String[] args) {
        Circle c1=new Circle(new Point(4,2),3);
        System.out.println("center= "+c1.getcenter());
        System.out.println("Area= "+c1.area());

    }
    static class circle{
        Point c;
        int r;
        public circle(Point c,int r){
            this.c=c;
            this.r=r;
        }
        @Override
        double area(){
            return 3.14*r*r;
        }
        @Override
        Point getcenter(){
            return c;
        }
    }
}
*/



// outer class and inner class example
/////////////////////////////////////////////////////


/* 
public class first{
    private int x;
    class inner{
        private int y;
        public inner(int y){
            this.y=y;
        }
        public void sety(int y){
            this.y=y;
        }
        public int gety(){
            return y;
        }
    }
}

*/

//import java.util.Arrays;
/* 
class Calculator{
int s;
public int add(int x,int y) {
s=x+y;
return s;
}
public int sub(int x,int y) {
s=x-y;
return s;
}

}
public class First extends Calculator {
public static void main(String[] args) {
First cal=new First();
System.out.println(cal.add(3, 5));
}
}
*/

// use of super keyword
/*
import person.employee;

class person{
    String name="person";
    public void display(){
        System.out.println(name);
    }
}
    class Employee extends person{
        String name="employee";
        public void display(){
            super.display();
            System.out.println(name);
        }
    }
public class first{
    public static void main(String[] args){
        Employee emp = new Employee();
        emp.display();
    }
}
*/

// constructor calling 
/* 
class a{
    int x=10;
    public a(){
        System.out.println("in a constructor");
    }
    public a(int x){
        System.out.println("1in a parameter constructor x="+x);
    }
    public void display(){
        System.out.println("2x="+x);
    }
}
class b extends a{
    int x=30;
    public b(){
        super(10);
        System.out.println("3X="+x);
    }
}
public class first{
    public static void main(String [] args){
        b a=new b();
        a.display();
    }
}
 */

// abstruct class
/* 
abstract class animal{
    //public abstract void animalsound();
    public void sleep()
    {
        System.out.println("zzz");
    }
}
class pig extends animal{
    public void animalsound(){
        System.out.println("wee wee");
    }
}
class first{
    public static void main(String[] args) {
        pig mypig= new pig();
        mypig.animalsound();
        mypig.sleep();
    }
}
 */

// interface
/* 
interface Drawable{
    void draw();
}
class rectange implements Drawable{
    public void draw(){
        System.out.println("drawing rectangle");
    }
}
class circle implements Drawable{
        public void draw(){
            System.out.println("draw circle");
        }
    }
class first{
    public static void main(String[] args) {
        //Drawable d=new rectange();
        Drawable d=new circle();
        d.draw();
    }
}
 */
//..................................................................
/* 
interface printable{
    void print();
}
interface showable{
    void show();
}
class first implements printable,showable{
    public void print(){
        System.out.println("hello");
    }
    public void show(){
        System.out.println("welcome");
    }
}
public static void main(String args[]){
    first obj = new first();
    obj.print();
    obj.show();
} */
//88888888888888888888888888888888888888888888888888888888888888888888888888888

// inerface inheritance
/* 
interface printable{
    void print();
}
interface showable extends printable{
    void show();
}
class first implements showable{
    public void print(){System.out.println("Hello");}
    public void show(){System.out.println("Welcome");}
}

public static void main(String args[]){
first obj = new TestInterface4();
obj.print();
obj.show();
}
*/
/* 
interface Printable{
void print();
}
interface Showable{
void show();
}
class A7 implements Printable,Showable{
public void print(){System.out.println("Hello");}
public void show(){System.out.println("Welcome");}
public static void main(String args[]){
A7 obj = new A7();
obj.print();
obj.show();
}
}
*/

// inheritance
/* 
class calculator{
    int s;
    public int add(int x,int y){
        s=x+y;
        return s;
    }
    public int sub(int x,int y){
        s=x-y;
        return s;
    }
    public class first extends calculator{
        public static void main(String[] args) {
            first cal=new first();
            System.out.println(cal.add(2, 3));
        }
    }
} 
*/

/* 
class Calculator{
int s;
public int add(int x,int y) {
s=x+y;
return s;
}
public int sub(int x,int y) {
s=x-y;
return s;
}
}
public class f=first extends Calculator {
public static void main(String[] args) {
First cal=new First();
System.out.println(cal.add(3, 5));
}
}
 */