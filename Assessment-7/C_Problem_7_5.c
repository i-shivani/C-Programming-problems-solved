#include<stdio.h>
void disp_odd(int);
int main()
{
	int x=1;
	disp_odd(x);
}
void disp_odd(int x)
{
    for(;x<10;x+=2) 
        printf("%d\n",x);
}