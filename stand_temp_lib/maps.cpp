#include<map>
#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool cmp(pair<char,int>&a,pair<char,int>&b)
{
    if(a.second==b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

void msort(map<char,int>&mp)
{
    vector<pair<char,int>>v;
    for(auto &it:mp)
        v.push_back(it);
    //sort using a lamda function
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    {
        while(v[i].second--)
            cout<<v[i].first;
    }
}

int main()
{
    //maps are used to store key-value pairs are stored in an unsorted manner
    //maps are internally sorted based on key values.
    /*
    map<int,string>m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    map<int,string>::iterator it;
    1."Normal iteration"
    for(it =m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    Time insertion complexity:o(log n)
    Time access complexity:o(log n)
    2."Iteration using auto key word"
    for(auto &pr:m)
       cout<<pr.first<<" "<<pr.second<<endl;
    3."Find Function"
    auto it = m.find(3);// o(log(n))
    if(it==m.end())
        cout<<"No Value";
    else
        cout<<it->first<<" "<<it->second<<endl;
    4."Erase Function"
    m.erase(3);// o(log(n))
    m.erase(it);
    map<string,string>mn;
    mn["abcd"]="abcd";//s.size()*log(n)
    */

    /* PROBLEM STATEMENT
    Given a string str, the task is to sort the string according 
    to the frequency of each character, 
    in ascending order. If two elements have the same frequency, 
    then they are sorted in lexicographical order.  
    Input: str = “geeksforgeeks” 
    Output: forggkksseeee 
    */
    string str="geeksforgeeks";
    map<char,int>mp;
    for(int i=0;i<str.size();i++)
        mp[str[i]]++;
    /*for(auto it =mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    // checks if key 'e' is present or not
    if (mp.count('e'))
        cout<<mp['e']<<endl;
    else
        cout << "The key e is not present\n";
    auto it = mp.begin();
    it++;
    cout<<it->first<<endl;*/
    msort(mp);
return 0;
}