#include<stdio.h>
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
        printf("\n");

    }
    
}
void inddeletion(int arr[],int size,int index){
    
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    


}
int main(){
    int arr[100]={1,3,100,78};
    int size=4,element=45,index;
    scanf("%d", index);
    
    inddeletion(arr,size,index);
    size-=1;
    display(arr,size);

    return 0;
}