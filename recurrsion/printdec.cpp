#include<iostream>
using namespace std;
void dec(int n){
    if(n==1){
       cout<<n<<endl;
        return ;

    }
    cout<<n<<endl;
    return dec(n-1);
}
int main(){
int n;
cin>>n;
dec(n);
return 0;
}