#include <iostream>
using namespace std;

int main() {
    int n,arr[n];
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        while(arr[i]>0){
            int r=arr[i]%10;
            arr[i]=arr[i]/10;
            if(r==4){
                cnt++;
                
            }
        }
        cout<<cnt<<endl;
    }
    

	return 0;
}