#include<iostream>
using namespace std;
void merge(int arr1[],int arr2[],int arr3[],int size1,int size2){
int i=0,j=0,k=0;
while(i<size1 && j<size2){
    if(arr1[i]<arr2[j]){
        arr3[k++]=arr1[i++];
    }
    else{
        arr3[k++]=arr2[j++];

    }
    while(i<size1){
        arr3[k++]=arr1[i++];
    }
    while(j<size2){
        arr3[k++]=arr2[j++];
    }
} 
    
}
int main(){
int size1,size2;
cout<<"\n Enter the size of array 1: ";
cin>>size1;
cout<<"\n Enter the size of array 2: ";
cin>>size2;
int arr1[size1];
int arr2[size2];
int arr3[size1+size2];
cout<<"\n Enter the Array 1 elements: ";
for(int i=0;i<size1;i++){
    cin>>arr1[i];
}
cout<<"\n Enter the Array 2 elements: ";
for(int i=0;i<size2;i++){
    cin>>arr2[i];
}


merge(arr1,arr2,arr3,size1,size2);
cout<<"\n Here is the sorted array: ";
for(int i=0;i<size1+size2;i++){
    cout<<arr3[i]<<" ";
}
cout<<endl;
return 0;
}