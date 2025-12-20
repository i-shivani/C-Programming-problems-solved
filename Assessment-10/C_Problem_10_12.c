#include<stdio.h>
int main()
{
    unsigned char c[51];
	int a[51],b[10]={48,49,50,51,52,53,54,55,56,57},n,x=0,s;
    printf("No.of elements in an int array: ");
    scanf("%d",&x);
    for(n=0;n<x;n++)
    {
    	printf("Enter number %d:",n+1);
    	scanf("%d",&a[n]);
	}
    for(n=0;n<x;n++)
    	for(s=0;s<10;s++)
    		if(a[n]==s)
    			c[n]=b[s];
	c[n]='\0';
    printf("%s",c);
}
