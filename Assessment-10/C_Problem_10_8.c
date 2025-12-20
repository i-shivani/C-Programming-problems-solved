#include<stdio.h>
int main()
{
    unsigned char a[51];
    int b[10]={48,49,50,51,52,53,54,55,56,57},n,s,c=0,x=0;
    printf("Enter number as a string: ");
    gets(a);
    for(n=0;a[n]!='\0';n++)
    	x++;
    for(n=0;n<x;n++)
    {
    	c=0;
        for(s=0;s<10;s++)
           	if(a[n]==b[s])
        	{
        		s=9;
        		c=1;
        	}
       	if(c!=1)
       	{
    		printf("Not Valid");  
    		n=x;
    	}
	}
	if(c==1 && n==x)
    	printf("Valid");  
}
