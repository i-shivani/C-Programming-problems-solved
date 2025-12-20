#include<stdio.h>
void increment(int,int *);
int main()
{
	int n,*p,b;
	printf("Enter no.of elemets in the array: ");
	scanf("%d",&n);
	int a[n];
	for(b=0;b<n;b++)
	{	
		printf("Enter number%d: ",b+1);
		scanf("%d",&a[b]);
	}
	p=a;
	increment(n,p);
	for(b=0;b<n;b++)
		printf("%d ",a[b]);
	
}
void increment(int x,int *y)
{
	int i;
	for(i=x-1;i>=0;i--)
		*(y+i) += 1;
}
