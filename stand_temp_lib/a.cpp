#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str="bbaaaaabb";	
	str.erase(str.begin()+1);
	for(int i=0;i<str.size();i++)
	{
		cout<<i<<"->"<<str[i]<<endl;
	}

	return 0;
}

