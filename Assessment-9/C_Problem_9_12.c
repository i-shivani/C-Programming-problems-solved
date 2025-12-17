#include<stdio.h>
int main()
{
    int n,x[n],s=0,c=0;
    x[0]=1;
    for(n=0;x[n]!=0;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n+1]);
        c++;
        s+=x[n+1];
    }
    printf("Count=%d\nSum=%d",c,s);
}