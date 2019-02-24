#include<stdio.h>
int main()
{
	int num =50;
	int *p;
	p=&num;
	printf("Address of p variable is=%u\n",p);
	p=p+4;
	printf("After increment Address of p variable is=%u\n",p);
	printf("value of p=%x",&p);
	return 0;
}
