#include<iostream>
using namespace std;
void printsubsequence(string input,string output){
if(input.empty()){
    cout<<output<<endl;
    return;
}
printsubsequence(input.substr(1),output);
printsubsequence(input.substr(1),output+input[0]);
}
int main(){
string input;
cin>>input;
string output=" ";
printsubsequence(input,output);
return 0;
}