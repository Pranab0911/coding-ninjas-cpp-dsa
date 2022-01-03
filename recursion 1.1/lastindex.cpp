#include<iostream>
using namespace std;
int lastindex(int arr[],int n,int x){
    if(n==0){
        return -1;
    }
    int ans=lastindex(arr+1,n-1,x);
    if(ans!=-1){
        return ans+1;
    }
    else if(arr[0]==x){
        return 0;
    }
    else{
        return -1;
    }
}
int main(){
int n,x;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>x;
cout<<lastindex(arr,n,x)<<endl;
return 0;
}