#include<stdio.h>
#include<time.h>

void swap(int *a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sortdecending(int arr[], int n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

}
void heapify(int arr[], int n, int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }

    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }

}

void heapsort(int arr[],int n){
     for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
   
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      
      heapify(arr, i, 0);
    }
}




int main(){
    int arr[50000];
    int n;
    scanf("%d",&n);

    printf("n Random numbers:%d\n",n);
    for(int i=0;i<n;i++){
        //arr[i]=rand();
    }

   

   
     int t1=clock();
     heapsort(arr,n);
     int t2=clock();

     
     printf("Sorting the Array in Ascending Order by using Max-Heap Sort technique\n");
    for(int i=0;i<n;i++){
        printf("%d\n", &arr[i]);
    }

    printf("Time Complexity of sorting random data:%d\n",t2-t1);

    int t3=clock();
    heapsort(arr,n);
    int t4=clock();

    printf("Time Complexity to sort ascending of data already sorted in ascending order\n:%d",t4-t2);



    printf("Time Complexity to sort ascending all Cases (Data Ascending, Data in Descending & Random Data) in Tabular form for values n=5000 to 50000, step=5000\n");
    for(int i=5000;i<=50000;i+=5000){
        int t7=clock();
        heapsort(arr,i);
        int t8=clock();
        printf("%d\n",t8-t7);

    }
}