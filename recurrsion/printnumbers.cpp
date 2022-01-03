#include<iostream>
using namespace std;
void printnumbers(int n){
    if(n==1){
        cout<<n<<" ";
        return ;
    }
    printnumbers(n-1);
    cout<<n<<" ";
}
int main(){
int n;
cin>>n;
printnumbers(n);

return 0;
}