#include<iostream>
using namespace std;
int main()
{
int n,i,d,r,num,s=0,f=1;
cin>>n;
while(n!=0)
{
	r=n%10;
	for(i=1;i<=r;i++)
	{
	f=f*i;
	}
	s=s+f;
	cout<<f<<endl;
	f=1;
	n=n/10;
}
cout<<"sum is:"<<s;
return 0;
}
