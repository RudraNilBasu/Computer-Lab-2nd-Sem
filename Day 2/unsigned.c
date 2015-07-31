#include <stdio.h>
int main()
{
	unsigned int n=0xFFFFFFFE;
	printf("\n%u\n",n);
	printf("\n%u\n",++n);
	printf("\n%u\n",++n);
	return 0;
}
