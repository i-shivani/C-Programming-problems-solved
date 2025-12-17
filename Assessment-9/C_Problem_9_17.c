#include<stdio.h>
int main()
{
    int n,a,o=0,t=0,c=0;
    printf("Enter no.of elements in the array: ");
    scanf("%d",&a);
    int x[a],y[a+2];
    for(n=0;n<a;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n]);
    }
    y[0]=0;
    for(n=0;n<a;n++)
    {
        o=0;
        y[n]+=x[n];
        if(y[n]>9)
        {
            t=0;
            o=y[n]%10;
            t=y[n]/10;
            y[n]=o;
            y[n+1]=t;
        }
    }
    if(t>9)
    {
        y[n]=t%10;
        y[n+1]=t/10;
        c=a+2;
    }
    else
        c=a+1;
    for(n=0;n<c;n++)
        if(n!=(c-1))
            printf("%d ",y[n]);
        else if(y[n]!=0)
            printf("%d",y[n]);
}