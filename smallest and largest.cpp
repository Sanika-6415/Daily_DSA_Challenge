#include<iostream>
using namespace std;

int main()
{
	int arr[]={5,2,9,1,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int s=999,l=-9999;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>l)
		{
			l=arr[i];
		}
		if(arr[i]<s)
		{
			s=arr[i];
		}
	}
	cout<<"Smallest element in the array is : "<<s;
	cout<<"\nLargest element in the array is : "<<l;
	return 0;
}
