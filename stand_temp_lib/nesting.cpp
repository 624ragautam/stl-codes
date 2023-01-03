#include<vector>
#include<set>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    /*
    map<pair<int,int>,int>m;
    pair<int,int>p1,p2;
    p1={2,2};
    p2={3,4};
    cout<<(p1<p2);
    map<pair<string,string>,vector<int>> map;
    */
   map<int,multiset<string>>m;
   /*
   int n;
   cout<<"Enter number of elements :"<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
        int marks;
        cout<<"Enter marks:"<<endl;
        cin>>marks;
        string name;
        cout<<"Enter Name :"<<endl;
        cin>>name;
   }
   */
    m[78] ="Alice";
    //m[78] ="steve";
    m[99] ="Bob";  
    for(auto &pr:m)
   {
       cout<<(pr).first;
   }
   
}