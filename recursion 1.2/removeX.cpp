//highest occurrence of a character
#include<iostream>
#include<cstring>
using namespace std;
void removex(char arr[]){
    if(arr[0]=='\0'){
        return;
    }
    removex(arr+1);
    if(arr[0]=='x'){
        int n=strlen(arr);
        for(int i=1;i<=n;i++){
            arr[i-1]=arr[i];
        }
    }
}
int main(){
char arr[100];
cin.getline(arr,100);
removex(arr);
cout<<arr<<endl;
return 0;
}