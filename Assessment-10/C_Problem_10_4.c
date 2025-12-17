#include<stdio.h>
int main()
{
    char a[50];
    int b[10]={48,49,50,51,52,53,54,55,56,57},x=0,n,s;
    printf("Enter a string: ");
    scanf("%s",a);
    for(n=0;a[n]!='\0';n++)
        for(s=0;s<10;s++)
            if(a[n] == b[s])
                x=(x+s)*10;
    printf("%d\n",x/=10);
}
