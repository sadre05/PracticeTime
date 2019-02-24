#include<stdio.h>
int main()
{
	int number=32;
	int *p1,**p2;
	p1=&number;
	p2=&p1;
	printf("address of p variable is %x\n",number);
	printf("value of p variable is %d\n",*p1);
	printf("value of p variable is %x\n",*p2);

return 0;
}
