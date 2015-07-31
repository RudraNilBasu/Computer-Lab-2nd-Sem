//This Works without any Warnings
//Used gets() instead of scanf()
//RNB@PRIZM
#include<stdio.h>
#define SIZE 12
#define NUMBER 3
int main()
{
	//struct for subjects
	struct subject{
	char s1[10];
	char s2[10];
	char s3[10];
	char s4[10];	
	};	
	// struct for info	
	struct info {
	char name[SIZE+1];
	int roll;
	int regn;
	char dob[10];
	long long int ph;
	struct subject sub;	
	};
		
	//creating an array of structs
	struct info p[NUMBER];
	//taking input
	int i,j,k;
	for(i=0;i<NUMBER;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			p[i].name[j]=' ';
		}-
		for(j=0;j<SIZE-2;j++)
		{
			p[i].name[j]=97+(rand()%26);
		}
		p[i].name[SIZE-2]='i';
		p[i].name[SIZE-1]='x';
		p[i].name[SIZE]='\0';
		printf("Name found=%s\n",p[i].name);
		printf("Enter his roll = ");
		scanf("%d",&p[i].roll);//taking roll input
		printf("\n");
		printf("Enter his registration number = ");
		scanf("%d",&p[i].regn);//taking regn number
		printf("\n");
		printf("Enter his DOB (dd/mm/yy)= ");
		scanf("%s",&p[i].dob);//taking DOB input
		printf("\n");
		printf("Enter his phone number = ");
		scanf("%lld",&p[i].ph);//taking Phone number input
		printf("\n");
		//initialising sub array to ' '
		for(k=0;k<10;k++)
		{
			p[i].sub.s1[k]=' ';
			p[i].sub.s2[k]=' ';
			p[i].sub.s3[k]=' ';
			p[i].sub.s4[k]=' ';
		}
		printf("Enter his 1st Subject Name = ");
		scanf("%s",&p[i].sub.s1);//taking 1st Subject input
		printf("\n");
		printf("Enter his 2nd Subject Name = ");
		scanf("%s",&p[i].sub.s2);//taking 2nd Subject input
		printf("\n");
		printf("Enter his 3rd Subject Name = ");
		scanf("%s",&p[i].sub.s3);//taking 3rd Subject input
		printf("\n");
		printf("Enter his 4th Subject Name = ");
		scanf("%s",&p[i].sub.s4);//taking 4th Subject input
		printf("\n");
	}
	printf("INFO FOUND ARE \n");
	for(i=0;i<NUMBER;i++)
	{
		printf("Name = %s , Roll = %d , Regn Number = %d , DOB = %s , Phone = %lld \n",p[i].name,p[i].roll,p[i].regn,p[i].dob,p[i].ph);
		printf("Subjects are\n %s \t %s \t %s \t %s \n",p[i].sub.s1,p[i].sub.s2,p[i].sub.s3,p[i].sub.s4);
	}
	return 0;
}
