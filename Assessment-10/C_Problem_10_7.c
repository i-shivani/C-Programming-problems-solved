#include<stdio.h>
int main()
{
    char a[50];
    int x=0,n;
    printf("Enter a string: ");
    scanf("%s",a);
    for(n=0;a[n]!='\0';n++)
        x++;
    printf("%d\n",x);
}
