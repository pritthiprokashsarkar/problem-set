/* public class test{
    public static void main(String[] args){
        System.out.println("pri");
    }
} */
/* public class test{
    public static void main(String[] args){
        System.out.println("we love bangladesh");
        display();
    }
    private static void display(){
        System.out.println("we love india");
    }
} */

/* import java.util.Scanner;

public class test{
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        System.out.println("your name is"+input.next());
    }
} */

/* import java.util.Scanner;

public class test{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("your name is "+input.next());
    }
} */

/* import java.util.Scanner;

public class test{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int b=input.nextInt();
        int s=a+b;
        System.out.println("sum is ="+s);
    }
} */

/* import java.util.Scanner;

public class test{
    public static void main(String args[]){
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int b=input.nextInt();
        int s=a+b;
        System.out.println("sum is "+s);
    }
} */
/* public class test{
    public static void main(String[] args){
        int[] arr=new int[5];
        arr[0]=100;
        arr[1]=200;
        for(int i=0;i<5;i++){
            System.out.println(arr[i]);
        }
        System.out.println();
    }
} */
/* public class test{
    public static void main(String[] args){
        int[] arr=new int[5];
        arr[0]=100;
        arr[4]=200;
        for(int i=0;i<5;i++){
            System.out.print(" "+arr[i]);
        }
        System.out.println();
    }
} */
/* public class test{
    public static void main(String[] args){
        int[] arr=new int[2];
        arr[0]=10;
        arr[1]=20;
        change(arr);
        print(arr);
    }
    public static void change(int[] arr ){
        arr[0]=20;
        arr[1]=10;
    }
    public static void print(int[] arr){
        for(int i=0;i<2;i++){
            System.out.println(arr[i]);
        }
    }
} */

// most important anonymous object
/* import java.awt.Point;
public class test{
    public static void main(String[] args){
        Point p=getpoint();
        System.out.println("point="+p);
    }
    private static Point getpoint(){
        return new Point(1,2);
    }
} */
/* 
import java.awt.Point;
public class test{
    public static void main(String[] args){
        Point p=getpoint();
        System.out.println("p"+p);
    }
    private static Point getpoint(){
        return new Point(1,2);
    }
} */
/* import java.util.Arrays;
public class test{
    public static void main(String[] args){
        int[] arr={5,4,3,2,1};
        print(arr);
        Arrays.sort(arr);
        print(arr);
    }
    public static void print(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
        //System.out.println(null);
    }
} */
/* import java.util.ArrayList;
import java.util.Arrays;
public class test{
    public static void main(String[] args){
        ArrayList<String>fruits=new ArrayList<>();
        fruits.add("banana");
        fruits.add("mango");
        fruits.add("jackfruit");
        fruits.add("lichi");
        System.out.print(fruits);
        System.out.println(fruits.get(0));
        fruits.set(1,"fuck");
        fruits.remove("banana");
        fruits.remove(2);
        fruits.sort(null);

    }
} */

/* 
import java.awt.FlowLayout;

import javax.swing.*;
public class test{
    public static void main(String[] args){
        JFrame f = new JFrame("User form"); 
        f.setVisible(true); // visiable korar jonne
        f.setSize(400,200); 
        f.setLayout(new FlowLayout());// flowlayout sob kisu middle a anbe
        // lebel bananor jonne
        JLabel l1= new JLabel("User name :");
        // component add  korar jonne
        f.add(l1);
        // text field add korar jonne
        JTextField t1 = new JTextField(20);
        f.add(t1);
        //System.out.println();
        JLabel l2= new JLabel("Password :");
        f.add(l2);
        JTextField t2 = new JTextField(20);
        f.add(t2);

        JButton b =new JButton("submit ");
        f.add(b);

    }
}
 */

 

