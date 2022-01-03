#include<iostream>
#include<cstring>
using namespace std;
int stringtointeger(char input[],int last){
    if(last==0){
        return input[last]-'0';
    }
    int smallans=stringtointeger(input,last-1);
    int a=input[last]-'0';
    return smallans*10+a;
}
int stringtoint(char input[]){
    int n=strlen(input);
    return stringtointeger(input,n-1);
}
int main(){
char input[100];
cin.getline(input,100);
cout<<stringtoint(input)<<endl;
return 0;
}