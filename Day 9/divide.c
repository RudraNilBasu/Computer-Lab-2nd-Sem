#include<stdio.h>
int divide(int a,int b)
{
	if(a<b)
	{
		return 0;
	}
	return divide(a-b,b) +1;
}
int main()
{
	int a,b,div;
	printf("Enter 2 numbers\n");
	scanf("%d %d",&a,&b);
	div=divide(a,b);
	printf("ANSWER = %d\n",div);
	return 0;
}
