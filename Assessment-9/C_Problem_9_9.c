#include<stdio.h>
int main()
{
    int x[5],y[5],s=0,n;
    for(n=0;n<5;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n]);
    }
    for(n=0;n<5;n++)
        if(x[n]%2 == 1)
        {
            y[s]=x[n];
            s++;
        }
    n=s;
    for(s=0;s<n;s++)
      printf("%d ",y[s]);
}