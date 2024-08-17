#include <bits/stdc++.h>

int getFourthLargest(int arr[], int n)
{
    sort(arr, arr + n, greater<int>());
    
    if (n >= 4) 
    {
        return arr[3];
    }
   
    return -2147483648;
}