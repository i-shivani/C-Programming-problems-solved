#include<stdio.h>
int disp_two_digit_square(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_two_digit_square(x);
    printf("%d",y);
}
int disp_two_digit_square(int a)
{
    int s,n;
    for(s=0;a/10 > 0;a/=10)
	for(n=0;n<10;n++)
		if(a%100 == n*n)
			s++;
    return(s);
}