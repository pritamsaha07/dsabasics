#include<stdio.h>
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
        printf("\n");

    }
    
}
int indinsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;

    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;

}
int main(){
    int arr[100]={1,3,100,78};p
    int size=4,element,index=3;
    scanf("%d", &element);
    
    indinsertion(arr,size,element,100,index);
    size+=1;
    display(arr,size);

    return 0;
}