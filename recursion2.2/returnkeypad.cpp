#include<iostream>
using namespace std;
string getstring(int d){
    if(d==2){
        return "abc";
    }
    if(d==3){
        return "def";
    }
    if(d==4){
        return "ghi";
    }
    if(d==5){
        return "jkl";
    }
    if(d==6){
        return "mno";
    }
    if(d==7){
        return "pqrs";
    }
    if(d==8){
        return "tuv";
    }
    if(d==9){
        return "wxyz";
    }
    return " ";
}
int keypad(int input,string output[]){
    if(input==0){
        output[0]="";
        return 1;
    }
    int lastdgit=input%10;
    int smallans=input/10;
    int smalloutputsize=keypad(smallans,output);
    string option=getstring(lastdgit);
    
    for(int i=0;i<option.length()-1;i++){
        for(int j=0;j<smalloutputsize;j++){
            output[j+(i+1)*smalloutputsize]=output[j];
        }
    }

    int k=0;//this will iterate through the string
    for(int i=0;i<option.length();i++){
        for(int j=0;j<smalloutputsize;j++){
            output[k]=output[k]+option[i];
            k++;
        }
    }
    return smalloutputsize*option.length();
}
int main(){
int n;
cin>>n;
string output[1000];
int count=keypad(n,output);
for(int i=0;i<count;i++){
    cout<<output[i]<<endl;
}
return 0;
}