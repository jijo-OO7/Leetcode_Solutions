#include<bits/stdc++.h>
using namespace std;         
int main()
{
	int num;
	cout<<"Enter number of integers"<<endl;
	cin>>num;
	 int sum =1;
	int num_1 = 0;
	int num_2 = 1;
	int next_element =0;
	cout<<num_1<<","<<num_2<<",";
	
	for(int i = 2;i<num;i++)
	{
		next_element= num_1 + num_2;
		sum +=next_element;
		cout<<next_element<<",";
		num_1 = num_2;
        num_2 = next_element;		
	}
	cout<<endl;
	cout<<"Sum of the Fibonacci series is ::"<<sum<<endl;
 return 0;	
}
