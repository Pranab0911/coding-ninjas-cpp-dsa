#include<iostream>

using namespace std;
int duplicateNumber(int *arr, int size)
{
    //Write your code here
    int i,j;
 for( i=0;i<size;i++){
     for( j=i+1;j<size;j++){
         if(arr[i]==arr[j]){
             return arr[i];
         }
     }
 }
 return -1;
}

int main(){
    
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int result=duplicateNumber(arr,n);
cout<<result<<endl;
return 0;
}