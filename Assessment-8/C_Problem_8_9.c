#include<stdio.h>
int check_last_digit_odd(int);
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=check_last_digit_odd(x);
    printf("%d",y);
}
int check_last_digit_odd(int a)
{
    int i,s,f=1;
    i=a;
    for(f=1;a/10 > 0;f*=10)
	a=a/10;
    if(a%2 == 0)
	s=i;
    else
	s=(a-1)*f+i%f;
    return(s);
}