#include<iostream>
using namespace std;
void pairsum(int *arr,int n,int x){
    int pairsum=0;
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(arr[i]+arr[j]==x){
                 pairsum++;
             }
         }
     }
     cout<<pairsum;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int x;
cin>>x;
pairsum(arr,n,x);
cout<<endl;
return 0;
}