#include<stdio.h>
int disp_count_sum14(int);
int main()
{
    int x=99999,y;
    y=disp_count_sum14(x);
    printf("%d",y);
}
int disp_count_sum14(int a)
{
    int s,n=0,i;
    for(;a>50;a--)
    {
        i=a;
        for(s=0;(a*10/10)>0;a/=10)
            s=s+a%10;
        if(s==14) 
            n+=1;
        a=i;
    }
    return(n);
}