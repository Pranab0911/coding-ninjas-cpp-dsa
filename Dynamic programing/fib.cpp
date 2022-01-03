#include<iostream>
using namespace std;
//normal recursive approach of fibonaaci the time complexity is O(2^n)
int fib(int n){
if(n<=1){//base case
    return n;
}
int a=fib(n-1);
int b=fib(n-2);
return a+b;
}
int fib_2(int n){
    int *dp=new int [n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];

}

int fib_helper(int n, int *ans){
    if(n<=1){// base case
        return n;
    }
    //check if output already exits or not
    if(ans[n]!=-1){
        return  ans[n];
    }
    int a= fib_helper(n-1,ans);
    int b= fib_helper(n-2,ans);
    ans[n]=a+b;// save this for future use

    return ans[n];//return the final output
}
int fib_1(int n){
    int *ans=new int[n+1];// array will be always of size n+1
    for(int i=0;i<n;i++){
        ans[i]=-1;
    }
    fib_helper(n,ans);
}
int main(){
int n;
cin>>n;
cout<<fib_2(n)<<endl;
return 0;
}