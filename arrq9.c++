
#include<bits/stdc++.h>
using namespace std;
int kaden(int arr[],int size){
    int max=0;
    int curr=0;
    for (int i = 0; i < size; i++)
    {
        curr=curr*arr[i];
        if(curr>max)
            max=curr;
        
        if(curr<0)
            curr=0;
        
    }
    return max;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int var=kaden(arr,n);
    cout<<var;
    return 0;
    
}