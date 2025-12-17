#include<stdio.h>
int main()
{
    int n,x[n],y[n],c=0,d=0,t,s=0,i;
    x[0]=1;
    for(n=0;x[n]!=0;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n+1]);
        c++;
    }
    for(n=1;n<c;n++)
    {
        d=0;
        for(i=x[n];i != 0;i/=10)
            d+=i%10;
        y[n]=d;
    }
loop:for(n=1;n<c;n++)
        if(y[n]>y[n+1])
        {
            t=y[n];
            y[n]=y[n+1];
            y[n+1]=t;
        }
    if(s < c)
    {
        s++;
        goto loop;
    }
    for(n=1;n<c+1;n++)
      printf("%d ",y[n]);
}