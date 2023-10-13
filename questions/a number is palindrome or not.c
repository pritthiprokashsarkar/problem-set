// check if the number is palindrome or not
#include<stdio.h>
int main()
{
    int n, result, reminder,q;
    printf("enter the number:\n");
    scanf("%d",&n);

    q=n;
    result=0;

    while(q!=0)
    {
        reminder=q%10;
        result=result*10+reminder;
        q=q/10;
    }
    if(result==n)
        printf("its a palindrome number");
    else
        printf("its not a palindrome number");
    return 0;
}

// main logic holo ekta number ar number er reverse equal hole number ta palindrome number


/* reminder=q%10;
        result=result*10+reminder;
        q=q/10;

        ei logic deya number k reverse order a likha jai

        */
