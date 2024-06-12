#include<bits/stdc++.h>
using namespace std;
int minjumps(int arr[], int n){
    if(n==1)
    return 0;
    int res=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(i+arr[i]>=n-1){
            int x=minjumps(arr,i+1);
            //if(x!=INT_MAX)
            res=min(res,x+1);


        }

    }
    return res;

}
void printarray(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
int main(){
    int x,a[100];
    cin>>x;
    for(int i=0;i<x;i++)
    cin>>a[i];
    
    printarray(a,x);
    cout<<minjumps(a,x);

    return 0;

}