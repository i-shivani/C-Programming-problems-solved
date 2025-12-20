#include<stdio.h>
int main()
{
	char a[25],*pa;
	int i=0,x=0;
	pa=a;
	printf("Enter a string: ");
	gets(pa);
	for(i=0;*(pa+i)!='\0';i++)
		if(*(pa+i) == ' ')
			x++;
	printf("%d",x+1);
}
