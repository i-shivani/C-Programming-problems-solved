#include<stdio.h>
void disp_2digit_ones5(int);
int main()
{
	int x=10;
	disp_2digit_ones5(x);
}
void disp_2digit_ones5(int x)
{
    int y;
    for(;x<100;x++)
        if(x%10 == 5)
            y+=x;
    printf("%d\n",y);
}