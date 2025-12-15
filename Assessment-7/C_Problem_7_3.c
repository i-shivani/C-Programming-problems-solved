#include<stdio.h>
void disp_sum(int);
int main()
{
	int x=1;
	disp_sum(x);
}
void disp_sum(int x)
{
    int y;
    for(;x<6;x++) 
       y+=x;
    printf("%d\n",y);
}