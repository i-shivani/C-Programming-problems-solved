#include<stdio.h>
void disp_total_odd_digits(int);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	disp_total_odd_digits(x);
}
void disp_total_odd_digits(int x)
{
    int y;
    for(y=0;x*10/10 > 0;x/=10)
		if(x%10%2 != 0)
			y++;
	printf("%d",y);
}