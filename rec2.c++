#include<iostream>
using namespace std;
int movepi(string s){
    if(s.length()==0){
        return 0;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        movepi(s.substr(2));
    }
    else{
        cout<<s[0];
        movepi(s.substr(1));
    }
    return 0;
}
int main(){
    string s;
    cin>>s;
    movepi(s);
    return 0;
}