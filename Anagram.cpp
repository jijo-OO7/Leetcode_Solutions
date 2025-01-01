#include<bits/stdc++.h>
using namespace std;

bool is_anagram(string str_1,string str_2)
{
if(str_1.length() !=str_2.length())
   return false;
sort(str_1.begin(),str_1.end());
sort(str_2.begin(),str_2.end());
return (str_1 == str_2);
}

int main()
{
	string str_1 ="listen";
	string str_2 ="silent";
	
	if(is_anagram(str_1,str_2))
		cout<<"yes";
	else
		cout<<"no";
}