#include<stdio.h>
int main()
{
	FILE *fp;
	char str[70];
	fp=fopen("studentinfo","r");
	while(fgets(str,70,fp)!=NULL)
	{
		puts(str);
	}
	fclose(fp);
	return 0;
}
