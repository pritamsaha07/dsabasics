#include <algorithm>
#include <iostream>
using namespace std;
 

int kthSmallest(int arr[], int n, int k)
{
   
    sort(arr, arr + n);
 
    
    return arr[k + 1];
}
 

int main()
{
    int arr[100];  
    int n; 
    int k;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>k;
    cout << kthSmallest(arr, n, k);
    return 0;
}