#include<stdio.h>
int main()
{
    int x[5],y[5],s=0,n,i;
    for(n=0;n<5;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n]);
    }
    for(n=0;n<5;n++)
     for(i=2;i<=x[n]/2;i++)
		if(x[n]%i==0)
		{
			y[s]=x[n];
			s++;
			x[n]=0;
		}
    n=s;
    for(s=0;s<n;s++)
      printf("%d ",y[s]);
}

   