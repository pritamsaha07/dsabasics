#include<iostream>
using namespace std;
int inversion(int arr[],int n){
    int inv_count=0;
    for(int i=0;i<n-1;i++){
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                inv_count++;
            }
        }
        
    }
    return inv_count;
}
int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<inversion(arr,n);
    return 0;
}