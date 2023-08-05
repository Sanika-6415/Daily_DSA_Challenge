#include<iostream>
using namespace std;

int main()
{
	int arr[]={3,-7,2,-8,5,-4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp[n];
	int i=0;
	for(int j=0;j<n;j++)
	{
		if(arr[j]<0)
		{
			temp[i++]=arr[j];
		}
	}
	for(int j=0;j<n;j++)
	{
		if(arr[j]>=0)
		{
			temp[i++]=arr[j];
		}	
	}
	for(int j=0;j<n;j++)
	{
		cout<<temp[j]<<" ";
	}
	
	return 0;
}
