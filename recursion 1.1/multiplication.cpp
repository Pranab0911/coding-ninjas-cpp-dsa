#include<iostream>
using namespace std;
int multiply(int n,int m){
    if(n==0 || m==0){
        return 0;
    }
    int smallans=multiply(n,m-1);
    return n+smallans;


}
int main(){
int n;
cin>>n;
int m;
cin>>m;
cout<<multiply(n,m)<<endl;
return 0;
}