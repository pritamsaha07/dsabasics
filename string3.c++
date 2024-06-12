#include<iostream>
using namespace std;
void sunssqe(string s, int i, int n,string t  ){
    if(i==n){
        cout<<t<<endl;
    }
    else{
        sunssqe(s,i+1,n,s);
        t=t+s[i];
        sunssqe(s,i+1,n,t);

    }
}
int main(){
    string s;
    cin>>s;
    sunssqe(s,0,s.length(),"");
    return 0;
}
