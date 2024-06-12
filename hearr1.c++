#include<bits/stdc++.h>
using namespace std;
 int main(){
	 int t;
	 cin>>t;
	 while(t--){
	 int n,k,arr[100],sum=0;
	 cin>>n>>k;
	 for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	 }
	 
		 
	 
	 int l=sum/n;
	 if(l<=k){
		 cout<<0<<endl;
	 }
	 else{
		 int res=sum/(k+1)-n+1;
		 cout<<res<<endl;
	 }
	 }
	 return 0;
	 }
		