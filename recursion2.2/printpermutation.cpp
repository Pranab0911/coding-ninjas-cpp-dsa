/*
ABC
A B C
A BC
AB C
ABC
*/
#include<bits/stdc++.h>
using namespace std;
void solve(string output,string input){
    //base condition
    if(input.size()==0){
        cout<<output<<" ";
        return;
    }
    string output1=output;
    string output2=output;
    output1.push_back(' ');
    output1.push_back(input[0]);
    output2.push_back(input[0]);
    input.erase(input.begin()+0);
    solve(output1,input);
    solve(output2,input);
    return;
    
}
int main(){
string input;
cin>>input;
string output=" ";
output.push_back(input[0]);
input.erase(input.begin()+0);
solve(output,input);
return 0;
}