#include<iostream>
using namespace std;
int main(){
int n1,n2;
cin>>n1;
int arr1[n1];
for(int i=0;i<n1;i++){
     cin>>arr1[i];  
}
cin>>n2;
int arr2[n2];
for(int i=0;i<n2;i++){
     cin>>arr2[i];  
}
int m=max(n1,n2);
int ans[m];
int i=n1-1;
int j=n2-1;
int k=m-1;
int carry=0;
while(k>=0){
    int sum=carry;
    if(i>=0){
        sum+=arr1[i];
    }
   if(j>=0){
        sum+=arr2[j];
    }
    int q=sum/10;
    int r=sum%10;
    ans[k]=r;
    carry=q;
    
    i--;
    j--;
    k--;
}
if(carry!=0){
    cout<<carry<<" ";
}
for(int i=0;i<m;i++){
    cout<<ans[i]<<" ";
}

cout<<endl;
return 0;
}