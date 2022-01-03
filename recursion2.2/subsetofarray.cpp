#include<iostream>
using namespace std;
int subset(int input[],int n, int startindex,int output[][20]){
if(startindex==n){
    output[0][0]=0;
     return 1; 
}
int smalloutputsize=subset(input,n,startindex+1,output);
for(int i=0;i<smalloutputsize;i++){
    output[i+smalloutputsize][0]=output[i][0]+1;
    output[i+smalloutputsize][1]=input[startindex];

for(int j=1;j<=output[i][0];j++){
    output[i+smalloutputsize][j+1]=output[i][j];
}
}
return 2*smalloutputsize;
}
int subset(int input[],int n,int output[][20]){
return subset(input,n,0,output);
}
int main(){
int length,input[20],output[3500][20];
cin>>length;

for(int i=0;i<length;i++){
    cin>>input[i];
}
int size=subset(input,length,output);
for(int i=0;i<size;i++){
    for(int j=1;j<=output[i][0];j++){
        cout<<output[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
// #include <iostream>

// using namespace std;
// int subset(int input[], int n, int startindex ,int output[][20]){
//     if(startindex==n){
//         output[0][0]=0;
//         return 1;
//     }
//     int smalloutputsize=subset(input,n,startindex+1,output);
//     for(int i=0;i<smalloutputsize;i++){
//         output[i+smalloutputsize][0]=output[i][0]+1;
//         output[i+smalloutputsize][1]=input[startindex];
//         for(int j=1;j<=output[i][0];j++){
//             output[i+smalloutputsize][j+1]=output[i][j];
//         }
//     }
//     return 2*smalloutputsize;
// }
// int subset(int input[], int n, int output[][20]) {
//     // Write your code here
// return subset(input,n,0,output);
// }

// int main() {
//   int input[20],length, output[35000][20];
//   cin >> length;
//   for(int i=0; i < length; i++)
//     cin >> input[i];
  
//   int size = subset(input, length, output);

//   for( int i = 0; i < size; i++) { 
// 	for( int j = 1; j <= output[i][0]; j++) { 
// 		cout << output[i][j] << " ";
//     }
//     cout << endl;
//   }
// }