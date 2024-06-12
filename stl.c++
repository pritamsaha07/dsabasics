//#include"stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int>A={11,3,4,14};
    cout<<A[1];
    sort(A.begin(),A.end());
    bool present=binary_search(A.begin(),A.end(),3);//true
    present=binary_search(A.begin(),A.end(),9);//false
    A.push_back(100);
    present=binary_search(A.begin(),A.end(),100);//true
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    vector<int>::iterator it=lower_bound(A.begin(),A.end(),100);
    vector<int>::iterator it2=lower_bound(A.begin(),A.end(),100);
    cout<<*it<<" "<<*it<<endl;
    cout<<it2-it<<endl;


    return 0;

}