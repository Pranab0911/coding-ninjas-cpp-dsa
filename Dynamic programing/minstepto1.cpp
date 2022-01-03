#include<iostream>
#include<climits>
using namespace std;
int countmin(int n){// this is normal recursive solution 
    if(n<=1) return 0;// base case
    int x=countmin(n-1);
    int y=INT_MAX,z=INT_MAX;
    if(n%2==0) y=countmin(n/2);
    if(n%3==0) z=countmin(n/3);  // the time complexity of this solution is O(2^n)
    return min(x,min(y,z))+1;
}
int countmin_helper(int n,int *ans){
if(n<=1) return 0;// base condition
if(ans[n]!=-1){
    return ans[n];
}
// calculate output
int x=countmin_helper(n-1,ans);//memoization
int y=INT_MAX,z=INT_MAX;
if(n%2==0) y=countmin_helper(n/2,ans);
if(n%3==0) y=countmin_helper(n/3,ans);
int output=min(x,min(y,z))+1;
ans[n]=output;// save the output for future use
return output;
}

int countmin_1(int n){
    int *ans=new int [n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return countmin_helper(n,ans);

}
int count_2(int n){// dynamic programming
    int *dp=new int[n+1];
    dp[1]=0;
    for(int i=2;i<=n;i++){
        int  substractone=dp[i-1];
        int x=INT_MAX;
        int y=INT_MAX;
        if(i%2==0) x=dp[i/2];
        if(i%3==0) y=dp[i/3];
        dp[i]=min(substractone,min(x,y))+1;
    }
    int result=dp[n];
     delete [] dp;
     return result;
}
int main(){
int n;
cin>>n;
cout<<countmin(n)<<endl;
return 0;
}