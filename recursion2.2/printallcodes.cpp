#include<iostream>
#include<cstring>
using namespace std;
void printallcodes(string input,string output){
    if(input.empty()){
        cout<<output<<endl;
        return; 
    }
    char c1=input[0]-'0'+'a'-1;
    int b=stoi(input.substr(0,2));
    char c2=b+'a'-1;
    printallcodes(input.substr(1),output+c1);
    if(b>=10  && b<=26){
        printallcodes(input.substr(2),output+c2);
    }

}
int main(){
string input;
cin>>input;
string output="";
printallcodes(input,output);
return 0;
}