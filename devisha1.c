#include<stdio.h>
int student_marks(int number_of_student,int marks[],char gender)
{
	int add=0,i;
	if(gender=='b')
	{
		for(i=0;i<number_of_student;i=i+2)
		{
			add=add+marks[i];
		}
	}
	else if(gender=='g')
	{
		for(i=1;i<number_of_student;i=i+2)
		{
			add=add+marks[i];
		}
	}
	return add;
}
int main()
{
	int number_of_student,marks[1000];
	char gender;
	int sum,i;
	scanf("%d",&number_of_student);
	for (i=0;i<number_of_student;i++)
	{
		scanf("%d",&marks[i]);
	}
	scanf("\n%c",&gender);
	sum=addition(number_of_student,marks,gender);
	printf("%d",sum);
	return 0;
}
