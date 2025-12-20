#include<stdio.h>
int main()
{
	int *p,a;
	p=&a;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Entered number: %d\n",a);
	*p=10;
	printf("Altered number: %d",a);
}
