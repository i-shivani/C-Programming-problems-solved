#include<stdio.h>
int disp_total_1digit_prime(int);
int main()
{
    int x=2,y;
    y=disp_total_1digit_prime(x);
    printf("%d",y);
}
int disp_total_1digit_prime(int a)
{
    int s,n=0;
    for(;a<10;a++)
    {
	for(s=2;s <= a/2;s++)
 		if(a%s == 0)
			a++;
	if(a%s != 0 || a == 2 )
	{
		n+=1;
		a++;
	}
    }
    return(n);
}