#include<iostream>
using namespace std;
void swapalternate(int *arr,int n){
    int i=0,j=i+1;
    while(i<n){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i=i+2;
        j=j+1;

    }

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
swapalternate(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}