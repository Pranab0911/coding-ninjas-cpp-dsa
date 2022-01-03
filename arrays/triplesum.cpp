#include<iostream>
using namespace std;
int triplesum(int *arr,int n,int x){
    int triplesum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x)
                triplesum++;
            }
        }
    }
    return triplesum;
}
int main(){
int n,x;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>x;
cout<<triplesum(arr,n,x)<<endl;




return 0;
}