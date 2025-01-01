#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string str)
{
	string str_1 =str;
	int low=0; int high = str.length()-1;
	
	while(low<high)
	{
		char temp = str[low];
		str[low] = str[high];
		str[high] = temp;
		low++;
		high--;
	}
	return(str_1==str);
}


int main(){

string str;
cout<<"Enter a string ::"<<endl;
cin>>str;

if(is_palindrome(str)== true)
	cout<<"yes"<<endl;
else
	cout<<"No"<<endl;

}