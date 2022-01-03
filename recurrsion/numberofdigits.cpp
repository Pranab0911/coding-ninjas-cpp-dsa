#include<iostream>
using namespace std;
int numberofdigits(int n){
    if(n==0){
        return 0;
    }
    return numberofdigits(n/10)+1;
}
int main(){
int n;
cin>>n;
cout<<numberofdigits(n)<<endl;
}