#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, int>marks;
    marks["Pritam"]=100;
    marks["CR7"]=200;
    marks.insert({{"abcd",678},{"cdfg",908}});
    
    map<string,int>::iterator itr;
    for(itr=marks.begin();itr!=marks.end();itr++){
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    cout<<"The size is"<< marks.size()<<endl;
    cout<<"The size is"<< marks.max_size()<<endl;
    cout<<"The size is"<< marks.empty()<<endl;
    return 0;
}