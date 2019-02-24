#include<iostream>
using namespace std;
int main()
{
	int data[]={66,35,45,30,21};
	sort(data,data+5);
	for(int i=0;i<5;i++)
		cout<<data[i]<<" ";
	return 0;
}
