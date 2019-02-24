#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count = 10,sum=0,i;
	int *arr=(int*) malloc(sizeof(int)*count);
	for(i=0;i<count;i++)
	{
		arr[i]=i;
		sum = sum+arr[i];
	}
	printf("Array sum:%d",sum);
	return 0;
}
