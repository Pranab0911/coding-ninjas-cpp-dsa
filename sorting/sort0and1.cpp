/*input-10100
output-00011
*/
#include<iostream>
using namespace std;
void sort0and1(int *arr,int n){
int i=0,j=0;
while(i<n){
    if(arr[i]==1){
        i++;
    }
    else{
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j++;
            }
}
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort0and1(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}