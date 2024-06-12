#include<bits/stdc++.h>
using namespace std;
void findtwoele(int arr[], int n){
    int a,b;
    for (int i = 0; i < n; i++)
    {
        if(arr[abs(arr[i])-1]<0){
            cout<<abs(arr[i])<<" ";
        }
        else{
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
           cout<<(i+1)<<" ";
        
        }
    }
   
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   
    cout<<"element"<<endl;
    findtwoele(arr,n);
    return 0;

}