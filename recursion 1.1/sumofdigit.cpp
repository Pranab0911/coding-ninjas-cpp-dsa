#include<iostream>
using namespace std;
int sumofdigits(int n){
    if(n==0){
        return 0;
    }
    int lastdigit=n%10;
    int ans=sumofdigits(n/10);
    return lastdigit+ans;
}
int main(){
int n;
cin>>n;
cout<<sumofdigits(n)<<endl;
return 0;
}