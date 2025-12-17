#include<stdio.h>
int main()
{
    int x[50],y[50],s[51],t=0,n=0,o=0,a=0,b=0,i=0;
    printf("Enter no.of digits in number1: ");
    scanf("%d",&a);
    printf("Enter no.of digits in number2: ");
    scanf("%d",&b);
    printf("\n");
    for(n=a-1;n>=0;n--)
    {
        printf("Enter digit %d of 1st number: ",n+1);
        scanf("%d",&x[n]);
    }
    for(n=0;n<51;n++)
        s[n]=0;
    printf("\n");
    for(n=b-1;n>=0;n--)
    {
        printf("Enter digit %d of 2nd number: ",n+1);
        scanf("%d",&y[n]);
    }
    if(a>b)
        i=a;
    else
        i=b;
    for(n=i-1;n>-1;n--)
    {
        o=0;
        t=0;
        if(a>-1 && b>-1)
            s[n+1]+=x[--a]+y[--b];
        else if(a>-1)
            s[n+1]+=x[--a];
        else if(b>-1)
            s[n+1]+=y[--b];
        if(s[n+1]>9)
        {
           o=s[n+1]%10;
           t=s[n+1]/10;
           s[n+1]=o;
           s[n]=t;
        }
    }
    s[0]=t;
    for(n=0;n<=i;n++)
        printf("%d",s[n]);
}