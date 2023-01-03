#include <algorithm>
#include <iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    string s = { "gfg" };
    vector<int>v{1,2,3};
    bool val
        = prev_permutation(v.begin(),
                        v.end());
    // bool val
    //     = next_permutation(v.begin(),
    //                     v.end());
    if (val == false)
        cout << "No Word Possible"
            << endl;
    else
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i];
    }
    return 0;
}