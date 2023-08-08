#include<iostream>
using namespace std;

int main()
{
	string s1="listen",s2="silent";
	int count=0;
	if(s1.length()!=s2.length())
	{
		cout<<"False";
	}
	else
	{
		for(int i=0;i<s1.length();i++)
		{
			for(int j=0;j<s2.length();j++)
			{
				if(s1[i]==s2[j])
				{
					count++;
				}
			}
		}
		if(count==s1.length())
		{
			cout<<"True";
		}
		else
		{
			cout<<"False";
		}
	}

	return 0;
}
