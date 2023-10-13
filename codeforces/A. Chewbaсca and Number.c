
#include<stdio.h>
#include<string.h>
int main()
{
    char a[25];
    scanf(" %s",a);
    int sz= strlen(a);
    char temp = a[0];
    for(int i=0 ; i < strlen(a) ;  i++)
    {
        char rev = (9 - (a[i]-'0')) + '0';
        if(rev < a[i]) a[i] = rev ;
    }
    if(a[0] == '0') a[0] = temp;
    for(int i=0; i<strlen(a); i++ ) printf("%c",a[i]);
}
