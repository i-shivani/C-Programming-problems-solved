#include<stdio.h>
int disp_2digit_ones5(int);
int main()
{
    int x=10,y;
    y=disp_2digit_ones5(x);
    printf("%d",y);
}
int disp_2digit_ones5(int a)
{
    int s=0;
    for(;a<100;a++)
        if(a%10 == 5)
            s+=a;
    return(s);
}