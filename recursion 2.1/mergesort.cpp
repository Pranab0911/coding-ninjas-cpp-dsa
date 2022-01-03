//VERY IMPORTANT
//5 6 7 2 3 1
//1 2 3 5 6 7
#include<iostream>
using namespace std;
void merge(int *arr,int si,int ei){
         int size=ei-si+1;
         int mid=(si+ei)/2;
         int *out=new int[size];
         int i=si;
         int j=mid+1;
         int k=0;
         while(i<=mid && j<=ei){
             if(arr[i]>arr[j]){
                 out[k++]=arr[i++];
             }
             else{
                 out[k++]=arr[j++];
             }
         }
         while(i<=mid){
             out[k++]=arr[i++];
         }
         while(j<=ei){
             out[k++]=arr[j++];
         }
         int m=0;
         for(int i=si;i<=ei;i++){
             arr[i]=out[m++];
         }
         delete []out;
}
void mergesort2(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    mergesort2(arr,si,mid);
    mergesort2(arr,mid+1,ei);
    merge(arr,si,ei);
}
void mergesort1(int arr[],int n){
    mergesort2(arr,0,n-1);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
mergesort1(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}