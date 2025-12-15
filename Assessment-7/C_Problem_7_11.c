#include<stdio.h>
void count_total_digits(int);
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	count_total_digits(x);
}
void count_total_digits(int x)
{
    int y=0;
    for(;x*10/10 > 0;x/=10)
            y++;
    printf("%d\n",y);
}