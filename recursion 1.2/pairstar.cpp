#include<iostream>
#include<cstring>
using namespace std;
void pairstar(char arr[],int start){
    if(arr[start]=='\0'){
        return ;
    }
    pairstar(arr,start+1);
    if(arr[start]==arr[start+1]){
        int n=strlen(arr);
        arr[n+1]='\0';
         int i;
         for(i=n-1;i>start;i--){
             arr[i+1]=arr[i];
         }
         arr[start+1]='*';

    }
}
void pairstar(char arr[]){
    pairstar(arr,0);
}
int main(){
char arr[100];
cin.getline(arr,100);
pairstar(arr);
cout<<arr<<endl;
return 0;
}