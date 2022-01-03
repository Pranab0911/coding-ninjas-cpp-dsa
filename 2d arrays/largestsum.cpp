#include<iostream>
#include<climits>
using namespace std;
void findlargestsum(int arr[][100],int n,int m){
int maxsum=INT_MIN,index=-1;
bool isrow=true;
for(int i=0;i<n;i++){
    int rowsum=0;
    for(int j=0;j<m;j++){
        rowsum+=arr[i][j];
    }
    if(maxsum<rowsum)
    maxsum=rowsum;
    index=i;
}
for(int j=0;j<m;j++){
    int colsum=0;
    for(int i=0;i<n;i++){
        colsum+=arr[i][j];
    }
    if(maxsum<colsum){
        isrow=false;
        maxsum=colsum;
        index=j;
    }
}
if(isrow){
    cout<<"row"<<" ";
}
else{
    cout<<"column"<<" ";
}
cout<<index<<" "<<maxsum<<endl;
}
int main(){
int n,m;
cin>>n>>m;
int arr[100][100];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
findlargestsum(arr,n,m);

return 0;
}