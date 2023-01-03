#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool should_i_swap(pair<int,int>&a,
pair<int,int>&b)
{
    if(a.second==b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;
    /*
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j]) sorts in increasing order
                swap(a[i],a[j]);
        }
    }
    */
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(should_i_swap(a[i],a[j]))
    //             swap(a[i],a[j]);
    //     }
    // }
    sort(a.begin(),a.end(),should_i_swap);














}