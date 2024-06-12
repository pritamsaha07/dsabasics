#include<iostream>
using namespace std;
int maxsubpro(int arr[], int n){
    int ma= arr[0];
    int mi=arr[0];
    int prod=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<0){
            swap(mi,ma);
        }
        ma=max(arr[i], ma*arr[i]);
        mi=min(arr[i],mi*arr[i]);
        if(ma>prod){
            prod=ma;
        }
    }
    return prod;
    
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
