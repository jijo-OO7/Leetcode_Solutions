#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
cout<<arr[i]<<" ";
 }
}

int main()
{
int arr[] ={10,5,6,30};
int temp;
int n=4;

 int low=0;
 int high=n-1;
 while(low<high)
 {
	 int temp =arr[low];
	 arr[low]=arr[high];
	 arr[high]=temp;
	 low++;
	 high--;
 }
display(arr,4);
return 0;
}