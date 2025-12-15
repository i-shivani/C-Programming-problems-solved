#include<stdio.h>
void middle_2digits_prime(int);
int main()
{
	int x;
	printf("Enter a 4 digit number: ");
	scanf("%d",&x);
	middle_2digits_prime(x);
}
void middle_2digits_prime(int x)
{
    int y;
    x=x%1000/10;
	for(y=2;y <= x/2;++y)
		if(x%y == 0)
		{
			printf("Not Prime");
			x=0;
		}
	if(x%y != 0 || x == 2 )
			printf("Prime");
}