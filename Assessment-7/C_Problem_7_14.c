#include<stdio.h>
void disp_interchange_first_last_digit(int);
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	disp_interchange_first_last_digit(x);
}
void disp_interchange_first_last_digit(int x)
{
    int y,i,f=1;
    i=x;
	for(y=x%10;x/10 > 0;f*=10)
		x=x/10;
	y=y*f + x + (i%f/10*10);
	printf("%d",y);
}