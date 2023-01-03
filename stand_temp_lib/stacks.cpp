#include<stack>
#include<iostream>
using namespace std;

string isBallanced(string s)
{
    stack<char> st;

}

int main()
{
    /*
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    */
   //Next greater element using stack 
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       cout<<isBallanced(s)<<endl;
   }
return 0;
}