#include<iostream>
using namespace std;
int main(){
  
    int n;
    cin>>n;
      int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x,k;
        cin>>x>>k;
        int ans=-1;
        int i=0;
        while(i<n){
            if(a[i]==x){
                ans=i;
                break;
            }
            int y= max(1, abs(a[i]-x)/k);
            i=i+y;
        }
        cout<<ans;
        return 0;
    
}