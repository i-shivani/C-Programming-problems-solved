#include<stdio.h>
int main()
{
	int x;
	for(x=10;x<100;x+=2)
		if(x/10+x%10 == 6)
			printf("%d\n",x);
}
