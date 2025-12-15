#include<stdio.h>
void disp_two_digit_square(int);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	disp_two_digit_square(x);
}
void disp_two_digit_square(int x)
{
    int y,n;
    for(y=0;x/10 > 0;x/=10)
		for(n=0;n<10;n++)
			if(x%100 == n*n)
				y++;
	printf("%d",y);
}