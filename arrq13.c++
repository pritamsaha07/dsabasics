#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];;
        }
        int m;
        cin>>m;
        sort(a,a+n);
        int min=INT_MAX;
        for (int  i = 0; i+m-1 < n; i++)
        {
            int d=a[i+m-1]-a[i];

            if(d<min)
            min=d;
        }
        cout<<min<<endl;
        
        
    }
    return 0;
}