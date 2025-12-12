#include<stdio.h>
int main()
{
	 int x,y;
	 printf("Enter a 3 digit number : ");
	 scanf("%d",&x);
loop:y=(x%10)+(x/100)+((x/10)%10);
	 if(y > 10)
	 {
	 	x=y;
	 	goto loop;
	 }
	 printf("Result = %d",y);
}
