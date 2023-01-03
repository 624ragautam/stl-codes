#include<unordered_set>
#include<iostream>
using namespace std;

void printvec(unordered_set<string> &s)
{
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<endl;
}

int main()
{
    //they are basically maps without keys
    //only unique elements are stored
    unordered_set<string>s;
    s.insert("abc");//insertion:o(1)
    s.insert("sfs");
    s.insert("cfd");
    s.insert("abc");
    auto it =s.find("abc");//o(1)
    s.erase("cfd");
    s.erase(it);
    printvec(s);
    int q;
    cout<<"Enter the number of queries:";
    cin>>q;
    while(q--)
    {
        string str;
        cin>>str;
        if(s.find(str)==s.end())
        {
            cout<<"no";
        }
        else
        {
            cout<<"yes";
        }
    }
}