#include<stdio.h>
void check_prime(int);
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	check_prime(x);
}
void check_prime(int x)
{
    int y;
    for(y=2;y <= x/2;++y)
		if(x%y == 0)
		{
			printf("Not Prime");
			x=0;
		}
	if(x%y != 0 || x == 2 )
			printf("Prime");
}