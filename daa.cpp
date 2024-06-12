#include<iostream>
#include<time.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1=mid-l+1;

    int n2=r-mid;

    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[i]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;j++;
    }
    
}
void mergesort(int arr[], int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }

    //cout<<arr[l]<<" "<<arr[r];
}


void selectionsort(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<=arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout<<arr[0]<<" "<<arr[n];
}


int main(){
    int arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    //int m1=clock();
    //mergesort(arr,0,5);
    selectionsort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    
    //int m2=clock();

   // int timetaken=m2-m1;
    //cout<<timetaken;

     //int s1=clock();
    //selectionsort(arr,5);
    //int s2=clock();

   // int timetaken1=s2-s1;
    //cout<<timetaken1;




}