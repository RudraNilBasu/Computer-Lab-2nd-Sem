#include<stdio.h>
#include "print_alpha.c"
#include<string.h>
#include<ctype.h>
void pchar(char *s,int n,int font)
{
	int k, i, j, h;
	if(font==5)
	{
		for(i=0;i<font;i++)
		{
			for(h=0;h<n;h++)
			{
				for(j=0;j<font;j++)
				{
				 	if(s[h]==' ')
				 	{
				 	 	printf(" ");
				 	}
				 	else if(isalpha(s[h])!=0)
				 	{
					 	k=s[h]-'a';
					 	printf("%c",A[0][k][i][j]);
					}	 
				}
			printf(" ");	
			}
		printf("\n");
		}
	}
	else if(font==7)
	{
		for(i=0;i<font;i++)
		{
			for(h=0;h<n;h++)
			{
				for(j=0;j<font;j++)
				{
					if(s[h]==' ')
				 	{
				 	 	printf(" ");
				 	}
				 	else if(isalpha(s[h])!=0)
				 	{
					 	k=s[h]-'a';
					 	printf("%c",A[1][k][i][j]);
					}
				}
			printf(" ");	
			}
		printf("\n");
		}
	}
	else if(font==9)
	{
		for(i=0;i<font;i++)
		{
			for(h=0;h<n;h++)
			{
				for(j=0;j<font;j++)
				{
					if(s[h]==' ')
				 	{
				 	 	printf(" ");
				 	}
				 	else if(isalpha(s[h])!=0)
				 	{
					 	k=s[h]-'a';
					 	printf("%c",A[2][k][i][j]);
					}
				}
			printf(" ");	
			}
		printf("\n");
		}
	}		
	printf("\n");
	
}

int main()
{

	int b,fsize;
	char arr[50];
	printf("Enter the String: ");
	scanf("%49[^\n]",arr);
	printf("Enter font size (5 or 7 or 9): ");
	scanf("%d",&fsize);
	b=strlen(arr);
	printf("\n");
	pchar(arr,b,fsize);
	return 0;
}
