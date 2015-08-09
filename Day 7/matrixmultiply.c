// RNB @PRIZM
// Here we are multiplying two matrices, whose dimensions are given by the user, 
// but the matrix will be filled by random value using rand() function
#include<stdlib.h>
#include <stdio.h>

int main()
{
	
	int m,n,c,p,q,d,k,sum=0;
	int first[10][10]; // maximum upto 10 X 10 Matrix
	int second[10][10];
	int multiply[10][10]; // Final result will be stored here
	printf("Enter number of rows and Columns of first matrix\n");
	scanf("%d %d",&m,&n);
	//printf("Enter the elements of the First mastrix\n");
	int i,j;
	srand(time(NULL)); // Starting the seed
	for(i=0;i<m;i++)   // replace with random number
	{
		for(j=0;j<n;j++)
		{
			
			first[i][j]=rand();
			first[i][j]=first[i][j]%11;			
		}
	}
	printf("Enter number of rows and Columns of second matrix\n");
	scanf("%d %d",&p,&q);
	//printf("Enter the elements of the First mastrix\n");
	for(i=0;i<p;i++)    // replace with random number
	{
		for(j=0;j<q;j++)
		{
			second[i][j]=rand();
			second[i][j]=second[i][j]%11;			
			//second[i][j]=srand(0,10);
			//scanf("%d",&second[i][j]);
		}
	}
	if(n!=p)   // the error message if not compatible
	{
		printf("\nERROR CANNOT MULTIPLY\n");  // number of columns of first != number of rows in second
	}
	else
	{
		
		printf("\n___________________________________________________________\n");
		printf("\nFIRST MATRIX IS : \n");
		for(i=0;i<m;i++)  // printing first matrix
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",first[i][j]);
			}
			printf("\n");
		}
		printf("\nSECOND MATRIX IS : \n");
		for(i=0;i<p;i++) // printing second matrix
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t",second[i][j]);
			}
			printf("\n");
		}
		for(c=0;c<m;c++) // m,q,p
		{
			for(d=0;d<q;d++)
			{
				for(k=0;k<p;k++)
				{
					sum=sum+ first[c][k]*second[k][d];
				}
				multiply[c][d]=sum;
				sum=0;
			}
		}
		printf("\nMULTIPLIED MATRIX IS : \n");
		for(c=0;c<m;c++)//m,q
		{
			for(d=0;d<q;d++)
			{
				printf("%d\t",multiply[c][d]);
			}
			printf("\n");
		}
		printf("\nDONE\nRNB@PRIZM\n");
	}
	return 0;
}
