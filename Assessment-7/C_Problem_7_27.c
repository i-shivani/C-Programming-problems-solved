#include<stdio.h>
void disp_count_sum14(int);
int main()
{
	int x=99999;
	disp_count_sum14(x);
}
void disp_count_sum14(int x)
{
    int y,n=0,i;
    for(;x>50;x--)
    {
        i=x;
        for(y=0;(x*10/10)>0;x/=10)
            y=y+x%10;
        if(y==14) 
            n+=1;
        x=i;
    }
    printf("%d",n);
}