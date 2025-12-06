#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i;
	printf("enter numbers of elements:");

	int *p =(int*) calloc(n,sizeof(int));
	if(p ==NULL)
	{
		printf("memory not allocated\n");
		return 0;
	}
	printf("enter %d elememts:\n",n);
	for (i=0; i<n; i++)
	{
		scanf("%d",&p[i]);
	}
	printf("you entered:");
	for (i=0; i<n; i++){
		printf("%d",p[i]);
		
	}
	free (p);
	return 0;
}