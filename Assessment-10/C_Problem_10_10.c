#include<stdio.h>
int main()
{
    unsigned char a[51],c[51];
    int n,x=0,i;
    printf("Enter number as a string: ");
    scanf("%s",a);
    for(n=0;a[n]!='\0';n++)
    	x++;
    i=x;
    for(n=0;n<x;n++)
    {
    	i--;
    	c[i]=a[n];
	}
	c[n]='\0';
	printf("%s",c);
}
