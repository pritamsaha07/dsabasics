#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void findcommon(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
    int i=0,j=0,k=0;
    while(i<n1&& j<n2 && k<n3){
        if(arr1[i]==arr2[j]&&arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j])
        i++;
        else if(arr2[j]<arr3[k])
        j++;
        else
        k++;
    }
}
void printarray(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

    

int main(){
    int n,h,f,arr1[100],arr2[100],arr3[100];
    cin>>n;
    cin>>h;
    cin>>f;
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    printarray(arr1,n);
    for(int j=0;j<h;j++)
    cin>>arr2[j];
    printarray(arr2,h);
    for(int k=0;k<f;k++)
    cin>>arr3[k];
    printarray(arr3,f);
    findcommon(arr1,arr2,arr3,n,h,f);
    return 0;
}