#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int largest=INT_MIN;
int Secondlargest=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        Secondlargest=largest;
        largest=arr[i];
    }
    else if(arr[i]>Secondlargest){
        Secondlargest=arr[i];
    }
}
cout<<Secondlargest;
return 0;
}