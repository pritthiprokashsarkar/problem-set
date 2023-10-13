import java.util.Scanner;
public class ques2 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String s = input.nextLine().toLowerCase();
        int vow=0; int con=0;
        int schar=0;
        for(int i=0;i<s.length();i++){

            char ch=s.charAt(i);

            if(ch=='a' || ch=='e' || ch =='i' || ch=='o' || ch=='u' ){
                vow++;
            }
            else if(ch>='a' && ch<='z'){
                con++;
            }
            else {
                schar++;
            }
        }
        System.out.println("vowel= "+vow);
        System.out.println("consonant= "+con);
        System.out.println("special character= "+schar);
    }

}
