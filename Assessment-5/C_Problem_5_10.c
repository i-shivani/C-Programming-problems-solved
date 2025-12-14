#include<stdio.h>
int main()
{
	int x,sum=0;
	for(x=11;x<100;x+=2)
		if(x/10 == 7)
			sum=sum+x;
	printf("%d",sum);
}
