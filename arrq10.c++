#include<bits/stdc++.h>
using namespace std;

int maxsubpro(int arr[], int n){
    int res=arr[0];
    for (int i = 0; i < n; i++)
    {
        int nil=arr[i];
        for (int j = i+1; j < n; j++)
        {
            res=max(res,nil);
            nil*=arr[j];
        }
        res=max(res,nil);
        
    }
    return res;
    
}
int main(){
    int n,arr[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<maxsubpro(arr,n);
   
    return 0;
    
}
