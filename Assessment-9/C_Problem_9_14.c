#include<stdio.h>
int main()
{
    int n,x[n],c=0,avg=0;
    x[0]=1;
    for(n=0;x[n]!=0;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n+1]);
        c++;
    }
    if(c%2 != 0)
        printf("Middle=%d",x[(c/2)+1]);
    else
    {
        avg=x[c/2]+x[(c/2)+1];
        printf("Average=%d",avg/2);
    }
}