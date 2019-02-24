#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main()
{
	int arr[MAX],sum=0,i;
	printf("enter the no :");
	int count;
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		arr[i]=i;
		sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
}
