#include <stdio.h>

int main() {
    int n, count =1;
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++) printf(" ");
        for(int j=1; j<=i; j++) printf(" %d",(count++)%10);
        printf("\n");
        
    }

    return 0;
}