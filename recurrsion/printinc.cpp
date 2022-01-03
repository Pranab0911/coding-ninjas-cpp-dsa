#include<iostream>
using namespace std;
void inc(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
     inc(n-1);
    cout<<n<<endl;
}

int main(){
int n;
cin>>n;
inc(n);

}