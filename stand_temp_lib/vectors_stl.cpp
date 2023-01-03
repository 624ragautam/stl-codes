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
    vector <int>v;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    for(int i=0 ;i< n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<v.size()<<endl;
    printvec(v);
    v.pop_back();
    vector<int>v2 = v;//time complexity:o(n)
    cout<<"v2"<<endl;
    printvec(v2);
    v.push_back(4);//any changes to v isn't reflected in v2
    cout<<"v2"<<endl;
    printvec(v);
}