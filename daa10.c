#include<stdio.h>


int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}


int lcs(char arr1[], char arr2[], int n, int m, int dp[1000][1000]){

    
    if(n==0 || m==0){
        return 0;
    }
    if(arr1[n-1]==arr2[m-1]){
        dp[n][m]=lcs(arr1, arr2, m-1,n-1,dp);
    }

    if(dp[n][m]!=-1){
        return dp[n][m];
    }

    return dp[n][m]=max(lcs(arr1,arr2,n-1,m,dp), lcs(arr1,arr2,n,m-1,dp));


}


int main(){
    int dp[1000][1000];

    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            dp[i][j]=-1;
        }
    }

    char arr1[10]="HUMAN";
    char arr2[10]="CHIMPPANJE";

    
    int n=5;
    int m=10;

    lcs(arr1,arr2,n,m,dp);


}