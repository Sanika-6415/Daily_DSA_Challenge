#include<iostream>
using namespace std;
int gcd(int n1,int n2)
{
	if(n1==0 || n1==n2)
	{
		return n2;
	}
	if(n2==0)
	{
		return n1;
	}
	else if(n1>n2)
	{
		return gcd(n1-n2,n2);
	}
	return gcd(n1,n2-n1);
}
int main()
{
	int n1,n2;
	cout<<"Enter the first number : ";
	cin>>n1;
	cout<<"\nEnter the second number : ";
	cin>>n2;
	
	int g=gcd(n1,n2);
	cout<<"\nGCD of "<<n1<<" and "<<n2<<" is : "<<g;
	return 0;
}
