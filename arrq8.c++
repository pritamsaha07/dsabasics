#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int getmindiff(int arr[],int n,int k){
    sort(arr,arr+n);
    int ans=(arr[n-1]-arr[0]);
    int smallest= arr[0]+k;
    int largest=arr[n-1]-k;
    int mi,ma;
    for (int i = 0; i < n-1; i++)
    {
     mi=min(smallest,arr[i+1]-k);
     ma=max(largest,arr[i]+k);
     if(mi<0)
     continue;
     ans=min(ans,ma-mi);
    }
    return ans;
    
}
void printarray(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

int main(){
    int n,k,arr[100];
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    printarray(arr,n);
    cout<<getmindiff(arr,n,k);
    return 0;

}