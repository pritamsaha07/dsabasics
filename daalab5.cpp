#include<bits/stdc++.h>

using namespace std;

void swap(int arr[], int a, int b){

    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int partition(int arr[], int l ,int r){
    int pivot=arr[r];
    int i=l-1;
    for (int  j = l; j < r; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quicksort(int arr[], int l, int r){

    while(l<r){
        int pi=partition(arr, l,r);
        quicksort(arr,pi+1, r);
        quicksort(arr,l,pi-1);
    }
}

void ordered(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<=arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

     quicksort(arr,0,n);
     for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
}

void reverse(int arr[], int l, int r){
    while(l<=r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }

    quicksort(arr,0,r);
    for (int i = 0; i<r; i++)
    {
        cout<<arr[i]<<" ";
    }
}



int main(){

    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    ordered(arr,10);
    reverse(arr,0,10);

    quicksort(arr,0,10);

    int randarr[10];
    for(int i=0;i<10;i++){
        randarr[i]==rand();
    }

    quicksort(randarr,0,10);



}