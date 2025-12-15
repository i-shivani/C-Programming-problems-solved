#include<stdio.h>
void disp_count_HCF2(int,int);
int main()
{
	int x,y;
	printf("Enter number1: ");
        scanf("%d",&x);
        printf("Enter number2: ");
        scanf("%d",&y);
	disp_count_HCF2(x,y);
}
void disp_count_HCF2(int x,int y)
{
    int n,a;
    if(x>y)
        n=x;
    else
        n=y;
    for(a=n/2;a > 0;a--)
        if(x%a == 0 && y%a == 0)
        {
            printf("%d\n",a);
            a=1;
        }
}