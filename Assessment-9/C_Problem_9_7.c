#include<stdio.h>
int main()
{
    int x[5],y=0,s=0,n;
    for(n=0;n<5;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n]);
    }
loop:for(n=0;n<4;n++)
        if(x[n]<x[n+1])
        {
            y=x[n];
            x[n]=x[n+1];
            x[n+1]=y;
        }
    if(s<3)
    {
        s++;
        goto loop;
    }
    for(n=0;n<5;n++)
      printf("%d ",x[n]);
}
