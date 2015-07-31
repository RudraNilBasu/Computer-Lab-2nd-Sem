#include <stdio.h>
int main()
{
	printf("&&\n");
	int number1=1,number2=2,number3 = 3;
	printf("The two numbers are %d , %d \n",number1,number2,number3);
	printf("%*d",number1,number2);
	printf("\n");
	printf("%2$*1$d",number1,number2);
	printf("\n");
}
