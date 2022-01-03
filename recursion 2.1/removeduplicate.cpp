#include<iostream>
using namespace std;
void removeduplicate(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]!=input[1]){
        removeduplicate(input+1);
    }
    else 
    if(input[0]==input[1]){
        int i=1;
        for(;input[i]!='\0';i++){
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeduplicate(input);
    }
}
int main(){
char input[100];
cin.getline(input,100);
removeduplicate(input);
cout<<input<<endl;
return 0;
}