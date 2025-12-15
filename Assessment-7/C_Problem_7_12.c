#include<stdio.h>
void disp_sum_all_digits(int);
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	disp_sum_all_digits(x);
}
void disp_sum_all_digits(int x)
{
    int y=0;
    for(;x*10/10 > 0;x/=10)
            y+=x%10;
    printf("%d\n",y);
}