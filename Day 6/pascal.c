#include<stdio.h>
long fact(int);
int main()
{
	printf("Enter the number of lines upto which you want to print\n");
	int n,i,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(c=0;c<=(n-i-2);c++)
		{printf(" ");}
		for(c=0;c<=i;c++)
		{
			printf("%ld ",fact(i)/(fact(c)*fact(i-c)));
		}
		printf("\n");
	}
	return 0;
}

long fact(int n)
{
	long f=1;
	int i=1;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
