#include<cstring>
#include<iostream>
using namespace std;

void replacepi(char arr[],int start){
    if(arr[start]=='\0' || arr[start+1]=='\0'){
        return ;
    }
    replacepi(arr,start+1);
    if(arr[start]=='p' && arr[start+1]=='i'){
        int len=strlen(arr);
        
        for(int i=len;i>=start+2;i--){
            arr[i+2]=arr[i];
        }
        arr[start]='3';
        arr[start+1]='.';
        arr[start+2]='1';
        arr[start+3]='4';
        
    }
}
void replacepi2(char arr[]){
   replacepi(arr,0);
}
int main(){
char arr[1000];
cin.getline(arr,1000);
replacepi2(arr);
cout<<arr<<endl;

}