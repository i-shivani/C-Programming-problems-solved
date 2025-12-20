#include<stdio.h>
int main()
{
    char a[50];
    int b[10]={48,49,50,51,52,53,54,55,56,57},x,n,s,i,c;
    printf("Enter an integer: ");
    scanf("%d",&x);
    c=x;
    for(n=0;x != 0;n++)
    	x/=10;
    for(i=n-1;i>=0;i--)
    {
    	s=c%10;
        a[i] = b[s];
        c/=10;
    }
    a[n]='\0';
    printf("%s",a);
}

