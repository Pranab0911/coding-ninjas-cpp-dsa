#include<iostream>
using namespace std;
void replacecharacter(char input[],char c1,char c2){
for(int i=0;input[i]!='\0';i++){
    if(input[i]==c1){
        input[i]=c2;
    }
}
}
int main(){
char input[10000];
cin>>input;
char c1,c2;
cin>>c1>>c2;
replacecharacter(input,c1,c2);
cout<<input<<endl;
return 0;
}