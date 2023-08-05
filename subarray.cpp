#include<iostream>
using namespace std;

int main()
{
	int arr[]={2,4,6,8};
	int sum=10,r=0,j=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i++)
	{
		r=arr[i];
		for(int j=i+1;j<=n;j++)
		{
			if(r==sum)
			{
				cout<<"[";
				for(int k=i;k<j;k++)  
	            {  
	                cout<<arr[k]<<" ";
	            } 
	            cout<<"]";
				break;
			}
			r=r+arr[j];	 
		}
	}
	return 0;
}
