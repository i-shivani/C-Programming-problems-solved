#include<stdio.h>
void disp_2digit_odd_sum_tens7(int);
int main()
{
	int x=11;
	disp_2digit_odd_sum_tens7(x);
}
void disp_2digit_odd_sum_tens7(int x)
{
    int y;
    for(;x<100;x+=2)
        if(x/10 == 7)
            y+=x;
    printf("%d\n",y);
}