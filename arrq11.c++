#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    
    int l[n];
    int r[n];
    int ma,mi;
    int water=0;
    ma=l[0]=arr[0];
    mi=r[n-1]=arr[n-1];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>ma){
            ma=arr[i];
        }
            l[i]=ma;

        
    }
   
    for (int i = n-2; i >=0; i--)
    {
        if(arr[i]>mi){
            mi=arr[i];
        }
            r[i]=mi;
        
    }
    int s=0;nt i = 0; i < n; i++)
    {
        s+=min(l[i],r[i])-arr[i];
    }
    cout<<s<<endl;
    return 0;
}
