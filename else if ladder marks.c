#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	if(marks>90)
	{
		printf("get a grade");
		
	}
	else if (marks>80)
	{
		printf("get b grade");
		
	}
	else if(marks>70)
	{
		printf("get c grade");
		
	}
	else if (marks>60)
	{
		printf("get d grade");
	}
	else 
	{
		printf("failed");
		
	}
	return 0;
}