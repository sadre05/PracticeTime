#include<iostream>
//#unclude<stdio.h>
using namespace std;
int main()
{
    char s[100001];
    int i=0,count=0,c,h,e,f;
        c=h=e=f=0;
        i=0,count=0;
        cin>>s;
        while(s[i])
        {
            if(s[i]=='C')
                c++;
            if(s[i]=='H')
                h++;
            if(s[i]=='E')
                e++;
            if(s[i]=='F')
                f++;
            if(h>c)
                h--		
            if(e>h)
                e--;
            if(f>e)
                f--;
            i++;
        }
        cout<<f<<endl;
    return 0;
}
