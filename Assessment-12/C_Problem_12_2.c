#include<stdio.h>
int main()
{
	char a[25],b[2],*pa,*pb;
	int n,i=0,x=0,c[25],y=0,*pc;
	pa=a;
	pb=b;
	pc=c;
	printf("Enter a string: ");
	scanf("%s",pa);
	printf("Enter a character: ");
	scanf("%s",pb);
	for(i=0;*(pa+i)!='\0';i++)
		x++;
	for(n=0;n<x;n++)	
		if(*(pa+n) == *pb)
		{
			*(pc+y)=n+1;
			y++;
		}
	for(n=0;n<y;n++)
		printf("%d ",*(pc+n));
}
