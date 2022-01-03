#include<iostream>
using namespace std;
int firstocc(int *a,int n,int i,int key){
    if(n==i){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return firstocc(a,n,i+1,key);
}


int main(){
int a[]={4,2,1,2,5,2,7};
cout<<firstocc(a,7,0,2)<<endl;
return 0;
}