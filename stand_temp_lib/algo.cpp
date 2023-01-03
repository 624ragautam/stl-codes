#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    int a=5;
    int b=6;
    cout<<"Before "<<a<<endl;
    cout<<"Before "<<b<<endl;
    swap(a,b);
    cout<<"After "<<a<<endl;
    cout<<"After "<<b<<endl;

    string s ="abcd";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    int array[]={1,5,6,8,9,7};
    sort(array,array +sizeof(array)/sizeof(int));
    for(int i=0;i<sizeof(array)/sizeof(int);i++)
    {
        cout<<array[i]<<endl;
    }
    string str = "Hello";  
    cout << "Before Rotate : "<< str << endl;      
    rotate(str.begin(), str.begin() + 2, str.end());  
    cout <<"After Rotate  : " << str << endl; 
    rotate(str.begin(), str.begin() + 2, str.end()); 
return 0;
}