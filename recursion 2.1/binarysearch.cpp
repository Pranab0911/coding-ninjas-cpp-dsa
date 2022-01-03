#include<iostream>
using namespace std;
int binary(int n,int s,int e,int *arr,int x){
    if(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return binary(n,s,mid-1,arr,x);
        }
        else{
            return binary(n,e,mid+1,arr,x);
        }
    }
    return -1;
}
int binarysearch(int n ,int *arr,int x){
  return binary(n,0,n-1,arr,x);
}
int main(){
int n,x;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>x;
cout<<binarysearch(n,arr,x)<<endl;
return 0;
}