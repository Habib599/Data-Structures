#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long>v={1,2,3,4,5};
    // v.insert(v.begin()+2,10);singel
    vector<long long>v2={100,200,300,400};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}