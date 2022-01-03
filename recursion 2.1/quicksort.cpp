#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int partitation(int *arr,int si,int ei){
    int x=arr[si];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(x>arr[i]){
            count++;
        }
    }
int pi=count+si;
swap(arr[si],arr[pi]);
int i=si;
int j=ei;
while(i<pi && j>pi){
    if(arr[i]<arr[pi]){
        i++;
    }
    else if(arr[j]>arr[pi]){
        j--;
    }
    else{
        swap(arr[i],arr[j]);
    }
}
return pi;
}
void quicksort1(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int pi=partitation(arr,si,ei);
    quicksort1(arr,si,pi-1);
    quicksort1(arr,pi+1,ei);
}
void quicksort(int *arr,int n){
quicksort1(arr,0,n-1);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
quicksort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}