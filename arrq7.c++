#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n){
    int i=0,j=n-1;
    while(i!=j){
        swap(arr[i],arr[j]);
        i++;
    }
}
void printarray(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printarray(arr,n);
    rotate(arr,n);
    printarray(arr,n);
    return 0;

}