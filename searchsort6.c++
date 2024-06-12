#include<iostream>
using namespace std;

void product(int arr[], int n) {
  int l[n];
  int r[n];
  int p[n];
   int i, j;
   l[0] = 1;
   r[n-1] = 1;
   for(i = 1; i < n; i++)
      l[i] = arr[i-1]*l[i-1];
   for(j = n-2; j >=0; j--)
      r[j] = arr[j+1]*r[j+1];
   for (i = 0; i < n; i++)
      p[i] = l[i] * r[i];
   for (i = 0; i < n; i++)
       cout<<p[i]<<" ";
   return;
}
int main() {
    int n;
    cin>>n;
    int arr[n]; 
    for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   for(int i = 0;i < n; i++){
      cout<<arr[i];
   }
   printf("\nThe product array is: \n");
   product(arr, n);
   return 0;
}