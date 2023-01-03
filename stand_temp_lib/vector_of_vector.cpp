#include<vector>
#include<iostream>
using namespace std;
  
void printvec(vector<int>&v)
{
    cout<<"Size of array:"<<v.size()<<endl;
    for(int i=0;i< v.size();++i)
    {
        cout<<v[i]<<" "<<endl;
    }
    v.push_back(-1);
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number of vectors in the vector";
    cin>>n;
    vector<vector<int>>v;
    for(int i=0 ;i< n;i++)
    {
        int x;
        cout<<"Enter the number of elements in "<<i+1<<" th vector";
        cin>>x;
        vector<int>temp;
        for(int j=0;j<x;j++)
        {
            cout<<"Enter the elements:"<<endl;
            int y;
            cin>>y;
            temp.push_back(y);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        printvec(v[i]);
    }
}