// video lec 1 OOP 1 | Introduction & Concepts - Classes, Objects, Constructors, Keywords
/* 
public class oop {
      // video lec 1 OOP 1 | Introduction & Concepts - Classes, Objects, Constructors, Keywords
    public static void main(String[] args) {
        // store 5 names and 5 roll
        int[]num=new int[5];
        String[]name=new String[5];
        // new data type create korar jonne class
        student[]stu=new student[5];

        stu pritthi; 
        // amadr banano new data type er variable name pritthi
    }
    // create a class
    class stu{
        int num;
        string name;
        double marks;
    }
    // class is like a template for an object
    // object is an instinct of that class  
    // object heap a store hoi
    // reference variable stack a store hoi
    // object er class er boisesto acceess korar jonne dot operator
    // student1.num
    // all the variable inside objects are called instance variables
     
}
*/
/* 
import java.util.Arrays;

public class oop{
    public static void main(String[] args) {
        // akhon class er object gula k initialize kora lagbe new operator deya
        student[]students=new student[5];
        //System.out.println(Arrays.toString(students)); // reference variable null deya initialize kora
       // student stu1;
        //stu1=new student();
        student stu1=new student(); // new object toire
        // object er value set kora
        stu1.roll=1;
        stu1.name="pritthi";
        stu1.marks=89.98;
        // default value hisabe roll =0 , name = empty string
        // marks=0.0 hobe
        System.out.println(stu1.roll);
        System.out.println(stu1.name);
        System.out.println(stu1.marks);
        // dynamically allocates memory and returns reference to it
        // all class object in java must be allocated dynamically
    }
    //create a class
    // for every single student
    static class student{
        int roll;
        String name;
        double marks;
    }

}
 */


// eivabe stu1,stu2,....100 ta student thakle aro problem
// ei somossa somadha kore constructor

import java.util.Arrays;
public class oop{
    public static void main(String[] args) {
        student stu1=new student();

        student stu2=new student();
        /* System.out.println(stu1.roll);
        System.out.println(stu1.name);
        System.out.println(stu2.roll);
        System.out.println(stu2.name);  */
        stu2.greeting();
    }
        static class student{
        int roll; 
        String name;
        double marks;

        // we need a way to add values of above for that we new a word to access
        // every object
        void greeting(){
            System.out.println("hello! my name is "+this.name);
        }

        student(){
            //
            this.roll=13;
            this.name="pritthi";
            this.marks=87.23;
        }
    }
}
