/* an armstrong number of order n is a number of order n is a number in
 which each digit when multiplied by itself n number of times and finally
 added together ,results the same number.

for example 371 is a 3 digit number, therefore its order is 3

    now here each digit is multiplied by itself 3 times and finally added together
    and results in our original number ie

    3*3*3+7*7*7+1*1*1=371

    how to write a program which check if the number is an armstrong
    number or not

    steps to follow

    1) first find out , how many digits are there in your number  */

#include<stdio.h>
int main()
{
        int num;
        scanf("%d",&num);

        // program to find the number of digits of a number
        int count=0;
        int quotient;
        quotient=num;
        while(quotient!=0)
        {
            quotient=quotient/10;
            count++;
        }

        int reminder=0;

        quotient=num;
        int control;
        control=count;

        int multiply=1;
        int result=0;

        // program to multiply each digits n times and add them
        while(quotient!=0)
        {
            reminder=quotient/10;
            while(control!=0)
            {
                multiply=multiply*reminder;
                control--;

            }
            result=result+multiply;

            quotient=quotient/10;
            control=count;
            multiply=1;
        }

        if (result==num)
            printf("number is an armstrong number");
        else
            printf("number is not a armstrong number");

}
