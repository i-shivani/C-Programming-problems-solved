#include<stdio.h>
int main()
{
    unsigned char a[51],b[51];
    int n,x=0,i,c=0;
    printf("Enter number as a string: ");
    scanf("%s",a);
    for(n=0;a[n]!='\0';n++)
    	x++;
    for(n=0;n<x;n++)
        if(a[n]!=48)
        {
        	i=n;
        	n=x;
        }
	for(n=i;n<x;n++)
	{
		b[c]=a[n];
		c++;
	}
	b[c]='\0';
	printf("%s",b);
}
