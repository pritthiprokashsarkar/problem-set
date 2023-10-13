#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char a;

        scanf("%c ",&a);


        if(a=='c' || a=='o' || a=='d' || a=='e' || a=='f' || a=='o' || a=='r' || a=='s')
        {
            printf("yes\n");
        }
        else
            printf("no\n");

    }

}
