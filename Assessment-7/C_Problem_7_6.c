#include<stdio.h>
void disp_2digit_odd_below20(int);
int main()
{
	int x=11;
	disp_2digit_odd_below20(x);
}
void disp_2digit_odd_below20(int x)
{
    for(;x<20;x+=2) 
        printf("%d\n",x);
}