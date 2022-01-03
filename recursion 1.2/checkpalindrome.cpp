#include<iostream>
#include<cstring>
using namespace std;
void trim(char *arr){
    int j=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]!=' '){
            arr[j]=arr[i];
            j++;
        }
        
    }
    arr[j]='\0';
}
int main(){
char arr[100];
cin.getline(arr,100);
trim(arr);
cout<<arr<<endl;
return 0;
}