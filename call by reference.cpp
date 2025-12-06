#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a=10,b=20;
	printf("before swaping values of a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("after swaping values in main function  a=%d,b=%d",a,b);
	return 0;
}
	void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after swaping a=%d,b=%d\n",*a,*b);
}
