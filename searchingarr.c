#include<stdio.h>
 int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[],int size,int element){
    int low=0,mid;
    int high=size-1;
    while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    }
    return 0;

}
int main(){
    int arr[100]={1,5,6,8};
    int size=4;
    int ele=6;
    //int searchindex=linearsearch(arr,4,ele);
    int bisearchindex=binarysearch(arr,4,ele);
    printf("the element %d was found at %d",ele, bisearchindex);
}
