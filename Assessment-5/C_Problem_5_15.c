#include<stdio.h>
int main()
{
	int x,i,f;
	printf("Enter a number:");
	scanf("%d",&x);
	i=x;
	for(f=1;x/10 > 0;f*=10)
		x=x/10;
	if(x%2 == 0)
		printf("%d",i);
	else
		printf("%d",(x-1)*f+i%f);
}
