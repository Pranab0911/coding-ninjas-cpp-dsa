/*Rotate an array*/
//1 2 3 4 5 6   d=2
//3 4 5 6 1 2
 #include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotate(int arr[],int d,int n){
   
    reverse(arr,0,n-1);
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);
}
int main(){
int n,d;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>d;

rotate(arr,d,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
