#include<stdio.h>
#include<string.h>
struct student
{
	char roll[10];
	char name[50];
	char dob[11];
};


int main()
{
	FILE *fp;
	fp = fopen("studentinfo","w");
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("FOR STUDENT %d\n",(i+1));
		printf("Enter Name\n");
		scanf("%s",&s[i].name);
		strcat(s[i].name,"\n");
		fputs(s[i].name,fp);
		printf("Enter Roll\n");
		scanf("%s",&s[i].roll);//gets(s[i].roll);
		strcat(s[i].roll,"\n");
		fputs(s[i].roll,fp);
		printf("Enter DOB dd/mm/yyyy\n");
		scanf("%s",&s[i].dob);
		strcat(s[i].dob,"\n");
		fputs(s[i].dob,fp);
	}
	return 0;
}
