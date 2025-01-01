#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n)
{
  int max = 0 ;
   for(int i=1;i<n;i++)
   {
    if(arr[i]>arr[max])
	  max= i;
   }
  return max; 
}

int second_largest(int arr[],int n)
{   int max = largest(arr,4);

   int second_largest = 0;
  	 for(int i = 0;i<n;i++)
	 {  
		if(arr[i]!=arr[max])
        {
		if(arr[i]>arr[second_largest])
			second_largest =i;
		}			
	 }
	 return arr[second_largest];
}
int main()
{
 int arr[] ={10,5,8,20};
 cout<<"Second largest element in array is ::"<<second_largest(arr,4);
}