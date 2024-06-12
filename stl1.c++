#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
    

}
int main(){
    vector<int> vec1;
    int ele,n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        cout<<"Enetr a element to add"<<endl;
        cin>>ele;
        vec1.push_back(ele);
    }
   
    //vec1.pop_back();
    //vector<int>:: iterator it= vec1.begin();
    //vec1.insert(it+1,3, 566);
    display(vec1);
    return 0;
    
}