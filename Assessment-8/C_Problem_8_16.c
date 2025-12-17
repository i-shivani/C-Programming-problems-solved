#include<stdio.h>
int disp_biggest_4digit_div7_9(int);
int main()
{
    int x=9999,y;
    y=disp_biggest_4digit_div7_9(x);
    printf("%d",y);
}
int disp_biggest_4digit_div7_9(int a)
{
    int n;
    for(;a>999;a--)
        if(a%7==0 && a%9==0)
        {
            n=a;
            a=999;
        }
    return(n);
}