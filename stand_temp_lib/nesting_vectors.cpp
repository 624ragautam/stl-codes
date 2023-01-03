#include<vector>
#include<iostream>
using namespace std;
  
void printvec(vector<int>&v)
{
    cout<<"size:"<<v.size()<<endl;
    for (int i=0;i<v.size();++i)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    /*//vector of pairs
    vector<pair<int,int>>v={{1,2},{2,3},{4,5}};
    printvec(v);
    int n;
    cin>>n;
    for(int i= 0;i<n;++i)
    {
        int x ,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printvec(v);
    */
    //vector of vectors
    int m;
    cout<<"Enter the number of vectors:";
    cin>>m;
    vector<int>v[m];
    for(int i=0;i<m;++i)\
    {
        int z;
        cout<<"Enter the number of elements in"<<i<<"th vector";
        cin>>z;
        for(int j=0;j<z;++j)
        {
            int r;
            cin>>r;
            v[i].push_back(r);
        }
        printvec(v[i]);
    }

return 0;
}