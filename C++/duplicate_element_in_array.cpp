/* Problem Statement: You are given an array of integers 'ARR' containing N elements. Each integer is in the range [1, N-1], 
with exactly one element repeated in the array.
Your task is to find the duplicate element.
Time Complexity: O(nlogn)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cout<<"Enter total testcases: \n";//  \n is faster than endl i have read it; 
    cin>>test;
    while(test--)
    {
        int n;
        cout<<"Enter size: \n";
        cin>>n;
        cout<<"Enter elements which are in between 1 to "<<n-1<<" with one duplicate element :\n";
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.emplace_back(temp);   //emplace_back() is faster operation than push_back();
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        for(auto itr: mp)
        {
            if(itr.second>1)
            {
                cout<<"The duplicate element is: "<<itr.first<<"\n";
            }
        }   
    }
    return 0;
}
