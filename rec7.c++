#include<iostream>
using namespace std;
string keypad[]={"","","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
void substr(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    
    string code=keypad[ch-'0'];
    string ros=s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        
    
    
    substr(ros, ans+code[i]);
    //substr(ros,ans+ch);
}
}
int main(){
    substr("43","");
    return 0;
}