#include<stdio.h>
int main()
{
	int x;
	for(x=11;x<100;x+=2)
		if(x/10+x%10 == 7)
			printf("%d\n",x);
}
