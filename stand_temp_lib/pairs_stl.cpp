#include<iostream>
using namespace std;

int main()
{
    pair<int,string>p;
    p={2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0;i<3;++i)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[1]);
    cout<<endl;
    for(int j=0;j<3;++j)
    {
        cout<<p_array[j].first<<" "<<p_array[j].second<<endl;
    }
return 0;
}