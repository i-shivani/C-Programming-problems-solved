#include<stdio.h>
void disp_single_digit_square(int);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	disp_single_digit_square(x);
}
void disp_single_digit_square(int x)
{
    int y,n;
    for(y=0;x*10/10 > 0;x/=10)
		for(n=0;n<4;n++)
			if(x%10 == n*n)
				y++;
	printf("%d",y);
}