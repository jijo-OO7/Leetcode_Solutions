#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[], int n)
{ 
	for(int i =1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
			return false;
	}
	return true;
}

int main()
{
 int arr[50],num;
 cout<<"Enter Number of Elements::"<<endl;
 cin>>num;
 cout<<"Enter Elements into array ::"<<endl;
 for(int i=0 ;i<num;i++)
 { 
  cout<<"Enter element"<<i<<"::";
  cin>>arr[i];
 }
 if(is_sorted(arr,num)==true)
	 cout<<"Yes"<<endl;
 else
	 cout<<"No"<<endl;
}