#include<stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main()
{
    int x=11,y;
    y=disp_2digit_odd_sum_tens7(x);
    printf("%d",y);
}
int disp_2digit_odd_sum_tens7(int a)
{
    int s=0;
    for(;a<100;a+=2)
        if(a/10 == 7)
            s+=a;
    return(s);
}