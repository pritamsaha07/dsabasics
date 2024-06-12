#include<iostream>
using namespace std;
string movex(string s){
    int n=s.length();
    if(n==0){
        return "";
    }
    char a=s[0];
    string ans=movex(s.substr(1));
    if(a=='x'){
        return ans+a;
    }
    else{
        //cout<"There is no x"<<endl
        return a+ans;
    }
}
int main(){
    string s;
    cin>>s;
    cout<<movex(s);
    return 0;
}