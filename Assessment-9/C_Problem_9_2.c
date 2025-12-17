#include<stdio.h>
int main()
{
    int x[5],y=0,n;
    for(n=0;n<5;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n]);
        y+=x[n];
    }
    printf("Average=%d",y/5);
}
