#include<stdio.h>
int main()
{
	int a[5],i,min=a[0];
	//int n;
	//scanf("%d",&n);
	for(i=0;i<=8;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<min)
		min=a[i];
    }
	printf("minimum no of the array is:%d",a[i]);
	return 0;
}
