//wap recursive programm find out A to the power n (where n is the to the power and A is the positive integer) using divide and conquer method
#include<bits/stdc++.h>
using namespace std;

int divcon(int a, int n){
     if (n == 0)
        return 1;

    int temp=divcon(a,n/2);
0ol,,,,
    if (n % 2 == 0)
       return temp*temp;
    else
      return  a*temp*temp;

}

int main(){

int a;
int n;
cin>>a>>n;
cout<<divcon(a,n);
} 

