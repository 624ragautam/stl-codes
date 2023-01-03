#include<set>
#include<iostream>
using namespace std;

void printvec(multiset<string> &s)
{
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<endl;
}

int main()
{
    /*
    ->used for priority queue implementation
    ->duplicates are allowed
    
    multiset<string>s;
    s.insert("abc");//insertion:o(log(n))
    s.insert("sfs");
    s.insert("cfd");
    s.insert("abc");
    printvec(s);
    
    s.erase(): will erase all values specified as the parameter
    */ 
    //PROBLEM STATEMENT:Monk and magical carry bag
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<long long>bags;
        for(int i=0;i<n;i++)
        {
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies=0;
        for(int i=0;i<k;i++)
        {
            auto last_it =bags.end();
            last_it--;
            long long candy_ct=*last_it;
            total_candies+=candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);
        }
    }
}