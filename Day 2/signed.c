#include <stdio.h>
int main()
{
	
	signed int n=0x7FFFFFFF; // The maximum number which signed int can hold
	printf("\n%d\n",n);
	printf("\n%d\n",++n);    // Printing the overflow
	return 0;
}
