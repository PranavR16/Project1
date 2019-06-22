#include<bits/stdc++.h>
using namespace std;
void left(char[],int,int);
void right(char[],int,int);
void rightrot(char [],int);
void leftrot(char [],int);
static char ni[100];
int main()
{
	string s,sni;
	int i,n,q,q1,q2,nilen,rcount=0,lcount=0;
	cin>>s;
	cin>>q;
	char d[q];
	int r[q];
	for(i=0;i<q;i++)
	cin>>d[i]>>r[i];
	//for(i=0;i<q;i++)
	//cout<<d[i]<<' '<<r[i]<<endl;
	n=s.length();
	char a[n+1];
	strcpy(a,s.c_str());
	for(i=0;i<q;i++)
	{
		q1=r[i];
		if(d[i]=='L'||d[i]=='l')
		{
		left(a,q1,n);
		lcount++;
		}
		else if(d[i]=='R'||d[i]=='r')
		{
     	right(a,q1,n);
     	rcount=0;
     	}
     	if(lcount==r[i])
     	ni[i]=a[i];
     	else if(rcount==r[i])
     	ni[i]=a[i];
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<' ';
	cout<<endl;
	//for(i=0;i<n;i++)
//	cout<<ni[i]<<' ';
	//nilen=ni.length();
	sni=ni;
	cout<<endl<<sni;
	return 0;
}
void left(char a[],int q,int n)
{
	int i;
	for(i=0;i<q;i++)
	leftrot(a,n);
	
}
void right(char a[],int q,int n)
{
	int i;
	for(i=0;i<q;i++)
	rightrot(a,n);
	
}
void rightrot(char a[],int n)
{
	int j,last,i=0;
	last=a[n-1];
	for(j=n-2;j>=0;j--)
	{
		a[j+1]=a[j];
	//	ni[j]=a[j];
	}
		a[0]=last;
}
void leftrot(char a[],int n)
{
		int j,i=0,temp=a[0];
		for(j=0;j<n-1;j++)
		{
        a[j] = a[j+1];
       // ni[j]=a[j];
    	}
    	a[j] = temp;
}

