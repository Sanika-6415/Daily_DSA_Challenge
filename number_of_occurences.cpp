#include<iostream>
using namespace std;

int main()
{
	int arr[]={0,1,1,0,2,3,4};
	int x,count=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"\nEnter the value of x :";
	cin>>x;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			count++;
		}
	}
	
	cout<<"\nNumber of occurences of "<<x<<" are :"<<count;
	
	return 0;
}
