#include<stdio.h>
void disp_biggest_4digit_div7_9(int);
int main()
{
	int x=9999;
	disp_biggest_4digit_div7_9(x);
}
void disp_biggest_4digit_div7_9(int x)
{
    int y;
    for(;x>999;x--)
        if(x%7==0 && x%9==0)
        {
            printf("%d",x);
            x=999;
        }
}