#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>> s;
    int n=s.size();


    int a=s[0];
    int b=s[n];


    while(a<=b){
        if(isdigit(s[a]) and isdigit(s[b])){
           char x=s[a];
           char b=s[b];
           s[a]=s[b];
           s[b]=s[a];
            
        }
        if(isdigit(s[a])){
            b--;

        }
        if(isdigit(s[b])){
            a++;
        }
        else
        a++;
        b--;
    }

    cout<<s;
}