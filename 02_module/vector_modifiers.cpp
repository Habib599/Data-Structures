#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40};
    v.pop_back();
    v.pop_back();
    
    for(int val: v)
    {
        cout<<val<<" ";
    }
    // vector<int> v={1,2,3};
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    return 0;
}