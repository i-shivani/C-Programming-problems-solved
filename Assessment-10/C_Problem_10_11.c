#include<stdio.h>
int main()
{
    unsigned char a[51];
	int c[51],b[10]={48,49,50,51,52,53,54,55,56,57},n,x=0,s;
    printf("Enter number as a string: ");
    scanf("%s",a);
    for(n=0;a[n]!='\0';n++)
    	x++;
    for(n=0;n<x;n++)
    	for(s=0;s<10;s++)
    		if(a[n]==b[s])
    			c[n]=s;
	c[n]='\0';
	for(n=0;n<x;n++)
    	printf("%d ",c[n]);
}
