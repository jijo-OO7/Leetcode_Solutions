#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n)
{    int res=0;
	for(int i = 1 ;i<n;i++)
	{
		if(arr[i]>arr[res])
	       res=i;		
	}
	return arr[res];
}

int max(int arr[],int n )
{ int max;
	for(int i =0 ;i<n;i++)
	{
		bool flag =true;
		 max =0;
		for(int j=0;j<n;j++)
		{
		  if(arr[j]>arr[max])
            max = j;
           flag= false;		
		}
	}
	return arr[max];
}
int main()
{
	int arr[100],num;
	cout<<"Enter Number elements in array::"<<endl;
	cin>>num;
	cout<<"Enter eleements in array::"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"Enter element"<<i<<"::";
		cin>>arr[i];
	}
	cout<<"largest element in array is ::" <<largest(arr,num)<<endl;
	cout<<"max element in array is ::"<<max(arr,num)<<endl;
	
}