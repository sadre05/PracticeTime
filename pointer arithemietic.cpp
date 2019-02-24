#include<stdio.h>
int main()
{
	int num =20;
	int *p;
	p=&num;
	printf("Address of p variable is=%u\n",p);
	p=p+1;
	printf("After increment Address of p variable is=%u\n",p);
	return 0;
	
}
