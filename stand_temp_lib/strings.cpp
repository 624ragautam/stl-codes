#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    // 1.Taking string input using getline()
    // getline(cin, str);
    // 2.Inserting a character
    // str.push_back('s');
    // 3.Deleting a character
    // str.pop_back();
    // 4.Deletes character at position 4
    // str.erase(str.begin() + 4);

    // using swap() to swap string content
    // str1.swap(str2);

    // Initializing 1st string
    // string str1 = "geeksforgeeks is for geeks";
    // char ch[80];
    // using copy() to copy elements into char array
    // copies "geeksforgeeks"
    // str1.copy(ch, 13, 0);
  
    // string s1 ="abc";
    // string s2 ="abd";
    // cout<<s1.compare(s2)<<endl;
    // if no match s1.compare(s2) = -1;
    // if all characters of s1 match with all characters of s2 then s1.compare(s2) = 0;
    

    // string s1 ="nincompoop";
    // cout<<s1.find("x");//returns the position where 'com' matches with string s1 ie.3 
    // or else if not present returns large arbitrary integer;
    // s1.insert(2,"lol")//2:index to insert,output=nilolncompoop
    //s1.substr(begining-index,number of characters from begining index)

    //"convert string to integer"
    // string s1 = "786";
    // int x = stoi(s1);
    // cout<<x+2<<endl;//output : 788

    // //"integer to string"
    // int x=786;
    // cout<<to_string(x)+"2"<<endl;output:7862
return 0;
}