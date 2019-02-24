#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[50];
}e1;
int main()
{
	e1.id=202;
	strcpy(e1.name,"samar");
	printf("employee 1 id:%d\n",e1.id);
	printf("employee 1 name:%d\n",e1.name);
	return 0;
}
