#include<stdio.h>
void disp_total_2digit_odd(int);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	disp_total_2digit_odd(x);
}
void disp_total_2digit_odd(int x)
{
    int y;
    for(y=0;x/10 > 0;x/=10)
		if(x%100%2 != 0)
			y++;
	printf("%d",y);
}