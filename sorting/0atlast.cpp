/*push all the 0 elements at last*/
#include<iostream>
using namespace std;
void pushto0(int n,int arr[]){
 int nonzero=0;
 for(int i=0;i<n;i++){
     if(arr[i]!=0){
         int temp=arr[i];
         arr[i]=arr[nonzero];
         arr[nonzero]=temp;
         nonzero++;
     }
 }
}
int main(){
int n;
cout<<"\nEnter size of an Array: ";
cin>>n;
int arr[n];
cout<<"\nEnter the Array elemnts: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
pushto0(n,arr);
cout<<"\nHere is your array elements after pushing zero to the end: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}