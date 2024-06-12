#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end){
    while(start<end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
}
    void printarray(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
    int main(){
        int n;
        int arr[100];
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        printarray(arr, n);
        reverse(arr,0,n-1);
        printarray(arr, n);
        return 0;

    }

