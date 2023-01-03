#include <bits/stdc++.h>

using namespace std;

void printFirstNegativeInteger(int arr[], int n, int k)
{
	// deque<int>Di;
	// int i;
	// for (i = 0; i < k; i++)
	// 	if (arr[i] < 0)
	// 		Di.push_back(i);
	
	// for ( ; i < n; i++)
	// {
	// 	if (!Di.empty())
	// 		cout << arr[Di.front()] << " ";
	// 	else
	// 		cout << "0" << " ";
	// 	while ( (!Di.empty()) && Di.front() < (i - k + 1))
	// 		Di.pop_front(); 
	// 		if (arr[i] < 0)
	// 		Di.push_back(i);
	// }	
	// if (!Di.empty())
	// 	cout << arr[Di.front()] << " ";
	// else
	// 	cout << "0" << " ";
    deque<int>Di;
    vector<int>res;
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
            Di.push_back(arr[j]);
        else if (j-i+1==k)
        {
            if((!Di.empty()))
            {
                cout<<Di.front()<<" ";
                res.push_back(Di.front());
            }
            else
            {
                cout<<0<<" ";
                res.push_back(0);
            }
            if(arr[i]==Di.front())
                Di.pop_front();
            i++;
        }
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}

int main()
{
	int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	printFirstNegativeInteger(arr, n, k);
	return 0;
}
