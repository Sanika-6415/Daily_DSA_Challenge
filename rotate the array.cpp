#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int N;
	cout<<"\nEnter the value of N : ";
	cin>>N;
	int temp[n];
	for(int i=0;i<n;i++)
	{
		temp[i]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=temp[(i+N)%n];	
	}
	cout<<"\nArray after rotation : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
	return 0;
}
