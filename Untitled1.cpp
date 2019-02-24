#include<stdio.h>
int main()
{
	int test;
    scanf("%d",&test);
    while(test--)
    {
    int cnt=0,num,temp,rem;
    scanf("%d",&num);
    temp=num;
    if(num<333)
    printf("333\n");
    if(num>=333&&num<1333)
    printf("1333\n");
    if(num>=1333)
    {
    cnt=0;
    num=num+1;
    temp=num;
    while(cnt<3){
    cnt=0;
    while(temp!=0)
    {
    rem=temp%10;
    if(rem==3)
    cnt+=1;
    temp=temp/10;
    }              
    num=num+1;
    temp=num;
    //printf("%d  ",cnt);
    }
    printf("%d\n",num-1);
    }
                                
    }
	return 0;
}

