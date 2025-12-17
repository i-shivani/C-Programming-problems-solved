#include<stdio.h>
int main()
{
    int x[5],y[5],s=0,n,i=0;
    for(n=0;n<5;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n]);
    }
    for(n=0;n<5;n++)
    {
        for(i=x[n];i*10/10 > 0;i/=10)
		    s=s*10+i%10;
		y[n]=s;
		s=0;
    }
    for(n=0;n<5;n++)
    {
      printf("%d  ",y[n]);
      s+=y[n];
    }
    printf("\nSum=%d",s);
}