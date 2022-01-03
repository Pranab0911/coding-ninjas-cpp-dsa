#include<iostream>
using namespace std;
int lastocc(int *arr,int n,int i,int key){
    int restarray=lastocc(arr,n,i+1,key);{
        if(restarray!=-1){
            return restarray;
        }
        if(arr[i]==key){
            return i;
        }
        else
        return -1;
    }
}


int main(){
int arr[]={4,2,1,2,5,2,7};
cout<<lastocc(arr,7,0,2)<<endl;
return 0;
}