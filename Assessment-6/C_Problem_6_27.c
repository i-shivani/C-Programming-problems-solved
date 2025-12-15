#include<stdio.h>
int main()
{
	int x=99999,y=0,n=0,i;
    while(x > 50)
    {
        i=x;
        y=0;
        while(i*10/10 > 0)
        {
            y=y + i%10;
            i/=10;
        }
        if(y == 14)
            n++;
        x--;
    }
    printf("%d",n);
}