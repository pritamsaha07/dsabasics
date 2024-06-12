#include<iostream>
using namespace std;
int search(int arr[],int nums, int target) {
        int low=0;
        int high=nums;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target)
                return mid;
            else if(arr[mid]>=arr[low]){
                if(arr[mid]>=target and  arr[low]<=target)
                    high=mid-1;
                else
                    low=mid+1;
            }
            else{
                if(arr[mid]<=target and  arr[high]>=target)
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
        
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
    cout<<"element"<<endl;
    cout<<search(arr,n,key);
    return 0;

}
