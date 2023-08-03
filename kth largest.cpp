#include<iostream>
using namespace std;

int * sort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr;
}
int main()
{
	int n,k;
	cout<<"Enter the number of elements : ";
	cin>>n;
	
	int arr[n];
	cout<<"\nEnter the elements in the array :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the value of k : ";
	cin>>k;
	
	sort(arr,n);
	
	cout<<"\nkth largest element is : "<<arr[n-k];
	
	return 0;
}
