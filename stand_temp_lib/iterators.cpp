#include<vector>
#include<iostream>
using namespace std;

int main()
{
    /*vector<int>v={2,3,4,5,6,7};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it = v.begin();
    for(it = v.begin();it != v.end();it++)
    {
        cout<<*(it)<<endl;
    }*/
    //Iterators of pairs
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>>::iterator it;
    for(it=v_p.begin();it!=v_p.end();it++)
    {
        
    }
}