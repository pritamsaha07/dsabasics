#include<bits/stdc++.h>
using namespace std;
int longsunsq(int arr[], int n){
    set<int>_set;
    for (int i = 0; i < n; i++)
    {
       _set.insert(arr[i]);
    }
    
    int ans=INT_MAX;;
    for (int i = 0; i < n; i++)
    {
        if((arr[i]-1) == _set.end()){
            int j=arr[i]+1;
            while(_set.find(j)!=_set.end())
            j++;
            ans=max(ans,j-arr[i]);
        }
    }
    return ans;
    
}