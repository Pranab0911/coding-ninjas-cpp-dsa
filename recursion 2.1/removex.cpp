#include<iostream>
using namespace std;
void removex(char arr[]){
    if(arr[0]=='\0'){
        return ;
    }
    if(arr[0]!='x'){
        removex(arr+1);
    }
    else{
        int i=1;
        for(;arr[i]!=0;i++){
            arr[i-1]=arr[i];
        }
        arr[i-1]=arr[i];
        removex(arr);
    }
}
int main(){
char arr[100];
cin.getline(arr,100);
removex(arr);
cout<<arr<<endl;
return 0;
}