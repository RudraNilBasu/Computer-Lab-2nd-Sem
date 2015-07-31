#include<stdio.h>
void toh(int n,char from,char via,char to)
{
	if(n==1)
	{
		printf("MOVE DISC 1 FROM %c to %c\n",from,to);
		return;
	}
	toh(n-1,from,to,via);
	printf("MOVE DISC %d FROM %c TO %c\n",n,from,to);
	toh(n-1,via,from,to);
}
int main()
{
	int n;
	printf("ENTER THE NUMBER OF DISC \n");
	scanf("%d",&n);
	printf("THE FOLLOWING ARE THE STEPS IN TOWERS OF Hanoi for %d Discs\n ",n);
	toh(n,'A','B','C');
	return 0;
}
