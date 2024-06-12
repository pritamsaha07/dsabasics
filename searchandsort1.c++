#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key,int tog){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
       
            if(arr[mid]<key){
                s=mid+1;
            }
            
        
        else if(arr[mid]>key){
            e=mid-1;

        }
        else{
            ans=mid;
            if(tog==-1){
                e=mid+tog;
            }
            else{
                s=mid+tog;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int idx1=binarysearch(arr,n,key,-1);
    int idx2=binarysearch(arr,n,key,1);

    cout<<idx1<<" "<<idx2<<endl;
}