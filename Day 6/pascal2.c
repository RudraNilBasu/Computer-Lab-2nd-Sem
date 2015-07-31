#include<stdio.h>
int main()    // RNB @PRIZM
{
	int n;
	printf("Enter the number of lines\n");
	int i,j,k,l;
	scanf("%d",&n);
	//if(n%2==1){n++;}
	int *current;
	current=(int*)malloc((n)*sizeof(int));
	int *last;
	last=(int*)malloc((n)*sizeof(int));
	current[0]=1;
	last[0]=1;
	//for(j=0;j<n;j++)
	//{printf(" ");}
	//printf(" 1\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{printf(" ");}
		for(k=1;k<i;k++)
		{
			current[k]=last[k-1]+last[k];
		}
		current[i]=1;
		for(l=0;l<=i;l++)
		{
			printf("%2d",current[l]);
			last[l]=current[l];
		}
		printf("\n");
	}
	return 0;
}
