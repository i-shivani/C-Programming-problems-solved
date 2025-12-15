#include<stdio.h>
void check_prime_and_sum14(int);
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	check_prime_and_sum14(x);
}
void check_prime_and_sum14(int x)
{
    int y,i;
    i=x;
	for(y=2;y <= x/2;++y)
		if(x%y == 0)
		{
			printf("Not Prime");
			x=0;
		}
	if(x%y != 0 || x == 2 )
			printf("Prime");
	x=i;
	for(i=x%10;x/10 > 0;i+=x%10)
		x=x/10;
	if(i == 14)
		printf(" & Sum of digits is 14");
	else
		printf(" & Sum of digits is not 14");

}