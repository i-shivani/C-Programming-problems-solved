#include<stdio.h>
void check_last_digit_odd(int);
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	check_last_digit_odd(x);
}
void check_last_digit_odd(int x)
{
    int i,f=1;
    i=x;
	for(f=1;x/10 > 0;f*=10)
		x=x/10;
	if(x%2 == 0)
		printf("%d",i);
	else
		printf("%d",(x-1)*f+i%f);
}