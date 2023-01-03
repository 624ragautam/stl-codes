#include<set>
#include<iostream>
using namespace std;

void printvec(set<string> &s)
{
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<endl;
}

int main()
{
    //they are basically maps without keys
    //only unique elements are stored
    set<string>s;
    s.insert("abc");//insertion:o(log(n))
    s.insert("sfs");
    s.insert("cfd");
    s.insert("abc");
    // auto it =s.find("abc");//log(n)
    // s.erase("cfd");
    // s.erase(it);
    printvec(s);
    cout<<s.size();
    //print only unique elements from given input
    // set<string>str;
    // int m;
    // cout<<"Enter the number of strings:";
    // cin>>m;
    // for(int i=0;i<m;i++)
    // {
    //     string j;
    //     cout<<"Enter the string : ";
    //     cin>>j;
    //     s.insert(j);
    // }
    // for(auto value:s)
    // {
    //     cout<<value<<endl;
    // }
return 0;
}