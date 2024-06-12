#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

    void swap(int *a, int*b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    int findnext(int num[], int n){
        int i,j;
        for ( i=n-1; i >=0; i--){
        
            if(num[i]>num[i-1])
            break ;
        }
        
        if(i==0){
        cout<<"Nope"<<endl;
        return 0;
        }

        int x=num[i-1] ,s=i;
        for ( int j = i+1; j < n; j++)
        
            if(num[j]>x && num[j]<num[s])
                s=j;
            
        
        swap(&num[s],&num[i-1]);
        sort(num+i,num+n);
        cout<<num;
        return 0 ;
        
        
    }

int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int num=findnext(arr,n);
    if(num!=0)
{
    for (int i = 0; i < n; i++)
    {
        cout<<num;
    }
    
}  
cout<<endl;  
return 0;
}