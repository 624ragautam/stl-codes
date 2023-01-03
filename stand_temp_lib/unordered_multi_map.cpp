#include<unordered_map>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

// vector<vector<string>>groupAnagrms(vector<string>&strs)
// {
//     unordered_map<string,vector<string>>mp;
//     for(int i=0;i<strs.size();i++)
//     {
//         string t = strs[i];
//         sort(t.begin(),t.end());
//         mp[t].push_back(strs[i]);
//     }
//     vector<vector<string>>ans;
//     for(auto it:mp)
//         ans.push_back(it.second);
//     for(int i=0;i<ans.size();i++)
//     {
//         for(int j=0;j<ans[i].size();j++)
//         {
//             cout<<j<<" ";
//         }
//     }
// }

int main()
{
   /*
   inbuilt implementation:hashtable
   very important:unordered map doesnt allow duplicate elements as keys only unique values
   time complexity:o(1)
   valid keys datatype: only basic data types~:can't bes used(vectors,sets,maps)
   */
   vector<string>v{"ab","cd","ab","mark","asda","cd","ab"};
   unordered_map<string,int>m;
//    int n;
//    cout<<"Enter the number of inputs:";
//    cin>>n;
    for(int i=0; i<v.size() ;i++)
        m[v[i]]++;
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
//    vector<string>v{"eat","tea","tan","ate","nat","bat"};
//    groupAnagrms(v);
   return 0;
   
}