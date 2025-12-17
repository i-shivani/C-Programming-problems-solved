#include<stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=disp_interchange_first_last_digit(x);
    printf("%d",y);
}
int disp_interchange_first_last_digit(int a)
{
    int i,s,f=1;
    i=a;
    for(s=a%10;a/10 > 0;f*=10)
	a=a/10;
    s=s*f + a + (i%f/10*10);
    return(s);
}