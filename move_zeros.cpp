#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={1,0,3,4,5,0,7};
int count =0;
for(int i =0;i<7;i++)
{
	if(arr[i] !=0)
	{
		swap(arr[i],arr[count]);
		count++;
	}
}

for(int i=0;i<7;i++)
{
cout<<arr[i];
}
	
}