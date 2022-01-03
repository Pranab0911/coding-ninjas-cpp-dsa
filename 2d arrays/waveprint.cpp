/*4 4
1 2 4 6
8 9 10 11
12 32 54 76
78 79 80 81
1 8 12 78 79 32 9 4 10 54 80 81 76 11
*/
#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;//n for rows and m for columns
int arr[100][100];
for(int i=0;i<n;i++){//i for rows and j for columns
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
for(int j=0;j<m;j++ ){
    if(j%2==0){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }

    }
    else{
        for(int i=m-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
    }
}
return 0;
}