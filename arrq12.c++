#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,arr[100];
        cin>>n>>x;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int mi=INT_MAX;
        int i=0,j=0;
        int s=0;
        while(i<=j and j<n){
            while(s<=x and j<n){
                s+=arr[j++];
            }
            while(s>x and i<j){
                mi= min(mi, j-1);
                s-=arr[i];
                i++;
            }
        }
        cout<<mi<<endl;
        

    }
    return 0;
}