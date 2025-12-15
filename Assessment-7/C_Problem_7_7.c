#include<stdio.h>
void disp_2digit_odd_sum7(int);
int main()
{
	int x=11;
	disp_2digit_odd_sum7(x);
}
void disp_2digit_odd_sum7(int x)
{
    for(;x<100;x+=2)
        if(x/10+x%10 == 7)
            printf("%d\n",x);
}