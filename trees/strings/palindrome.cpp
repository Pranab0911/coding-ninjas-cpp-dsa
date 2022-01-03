#include<iostream>
#include<cstring>
using namespace std;
int palindrome(char *str){
   int n=strlen(str);
   for(int i=0;i<n;i++){
       if(str[i]!=str[n-i-1]){
           return false;
       }
     
   }
   return true;
   
}
int main(){
char str[100];
cin.getline(str,100);
cout<<(palindrome(str) ? "true" : "false");

return 0;
}