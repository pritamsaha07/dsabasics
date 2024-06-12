#include<iostream>
#include<time.h>
using namespace std;


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

    
}

void binarysearch(int arr[], int l, int h, int target){

     while(l<=h){
        int mid=(l+h)/2;

        if(arr[mid]==target){
            //cout<<"Element Found";
            continue;
        }
        else if(arr[mid]>target){
            h=mid-1;
        }

        else{
            l=mid+1;
        }
    }
}

void linearsearch(int arr[], int target,int n){
        for(int i=0;i<n;i++){n
            if(arr[i]==target){
                continue;
            }
        }
}



int main(){

    int arr[1000];

    for(int i=0;i<1000;i++){
        arr[i]=rand();
    }

    selectionsort(arr,1000);

    int l=0;
    int h=1000;
    int target=9;


    
    for(int i=0;i<10;i++){
    int b1=clock();
    binarysearch(arr,l,h*10,target);
    int b2=clock();
    int tt=b2-b1;
    cout<<tt;
    }

    for(int i=0;i<10;i++){
    int c1=clock();
    linearsearch(arr,target,h*10);
    int c2=clock();
    int tt2=c2-c1;
    cout<<tt2;
    }

   





}

   