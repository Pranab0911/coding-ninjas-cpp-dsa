#include<iostream>
using namespace std;
bool checknumber(int arr[],int n,int x){
    if(n==0){
        return false;
    }
    else if(arr[0]==x){
        return true;
    }
    return checknumber(arr+1,n-1,x);
}
int main(){
int n,x;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>x;
cout<<checknumber(arr,n,x)<<endl;
return 0;
}