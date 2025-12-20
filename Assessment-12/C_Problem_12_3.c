#include<stdio.h>
int main()
{
	char a[25],b[25],*pa,*pb;
	int n,i=0,x=0,c=0,y=0,z=0,f=0,p=0;
	pa=a;
	pb=b;
	printf("Enter a string: ");
	scanf("%s",pa);
	printf("Enter a sub-string: ");
	scanf("%s",pb);
	for(i=0;*(pa+i)!='\0';i++)
		x++;
	for(i=0;*(pb+i)!='\0';i++)
		z++;
	for(n=0;n<z;n++)
		for(y=f;y<x;y++)
			if(*(pa+y) == *(pb+n))
			{
				c++;
				f=y;
				y++;
				n++;
				if(c==1 && (*(pa+y) == *(pb+n)))
					p=y-1;
				else
					c=0;
				n--;
				y=x;
			}
	printf("%d",p);
}
