#include<iostream>
using namespace std;
void arrange(int *arr,int n){
int start=0,end=n-1,count=1;
while(start<=end){
    if(count%2==1){
        arr[start]=count;
        count++;
        start++;
    }
    else{
        arr[end]=count;
        end--;
        count++;
    }
}

}
/*int i,j;
    for(i=0, j=1;i< n && j<n;i++,j+=2){
        arr[i]=j;
    }
    arr[i]=n;
    if(n%2==0){
        j-=3;
    }
    else
    {
        j--;
    }
    i++;
    for(;i<n && j<n;i++,j-=2)
    {
        arr[i]=j;
    }
}*/
int main()
{
int n;
cin>>n;
int arr[n];
arrange(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
