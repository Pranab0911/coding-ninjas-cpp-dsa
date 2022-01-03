/*
abc
ab
bc
ac
abc
*/
#include<bits/stdc++.h>
using namespace std;
void solve(string input,string output){
if(input.size()==0){
   cout<<output<<" ";
   return;
}
string op1=output;
string op2=output;
op2.push_back(input[0]);
input.erase(input.begin()+0);
solve(input,op1);
solve(input,op2);
}
int main(){
string input;
cin>>input;
string output=" ";
solve(input,output);
return 0;
}