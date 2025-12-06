#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50}
	int *p;
	int i;
	p=a;
	printf("value and address of each element:\n\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\t address=%p\t(using pointer =%p)\n",
	i, a[i],&a[i],(p+i));
}
return 0;	
}