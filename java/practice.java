import java.util.Scanner;
/* 
public class practice {
    public static void main(String[] args) {
 
        //print korar jonne
        System.out.println("hello");
        System.out.println("pritthi sarkar");
        // user theke scan korar jonne
        Scanner scn=new Scanner(System.in); 
        int n=scn.nextInt();
        System.out.println("your input was "+n);
        System.out.print("hello world "); // new line a print hobe na
        System.out.print("hello world ");
*/
/* 
        Scanner scn=new Scanner(System.in); 
        String s=scn.nextLine(); // space soho input nebe String e s boro hat er
        System.out.println(s);
        String a=scn.next(); // word input nebe
        System.out.println(a);
    }
 */

 //data types
 /* 
  byte      1  -2^7 to 2^7
  short     2   -2^-15 to 2^15
  int       4   -2^31 to 2^31
  long      8   -2^63 to 2^63

  char  
  float
  double
  bool


 */
/* 
public class practice {
     // java te pass by reference hobe na
     // global banate hobe
        public static void fun(){
            int temp=a;
            a=b;
            b=temp;
        }
            static int a=10; // main class er moddhe global varaible
            static int b=20;
    public static void main(String[] args) {
       
            
            System.out.println("before swap");
            System.out.println(a+" "+b);
            fun();
            System.out.println("after swap");
            System.out.println(a +" "+b);
        }
}
*/
/* 
public class practice{
    public static void fun(int[]arr){ // array sob somoy call by reference hobe
        arr[2]=30; // call by reference ba address pass 
        //hoies tai arr[2], arr[4] er value paise
        arr[4]=100;
        /* for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        } 
    }
    public static void main(String[] args){
        int[] arr=new int[5];
        arr[0]=10;
        arr[1]=20;
        arr[3]=30;
        fun(arr);
    for(int val:arr){
       System.out.print(val+" "); 
    }
    System.out.println("");
}
}
*/

