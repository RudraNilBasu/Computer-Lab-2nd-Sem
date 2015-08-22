#include <stdio.h>
int main()
{
	unsigned int n=0xFFFFFFFE;   // maximum value of unsigned int -1 (n+1) is the maximum value.
	printf("\n%u\n",n);	     // printing the number (maximum number unsigned int can hold -1).
	printf("\n%u\n",++n);        // printing the maximum number (which unsigned int can hold).
	printf("\n%u\n",++n);	     // overflow occurs here.
	return 0;
}
