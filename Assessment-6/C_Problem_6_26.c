#include<stdio.h>
int main()
{
	int x=9999;
    while(x > 999)
    {
        if(x%7 == 0 && x%9 == 0)
        {
            printf("%d",x);
            x=1000;
        }
        x--;
    }
}