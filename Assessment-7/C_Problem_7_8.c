#include<stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
	int x=10;
	disp_2digit_even_sum6(x);
}
void disp_2digit_even_sum6(int x)
{
    for(;x<100;x+=2)
        if(x/10+x%10 == 6)
            printf("%d\n",x);
}