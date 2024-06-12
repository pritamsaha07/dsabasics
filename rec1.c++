#include<iostream>
using namespace std;
int rev(string s){
    int n=s.length();
    if(n==0){
        return 0;
    }
    string ros=s.substr(1);
    rev(ros);
    cout<<s[0];
    
    return 0;
}
int main(){
    string s;
    cin>>s;
    rev(s);
    return 0;
}