#include<iostream>
#include<cmath>
using namespace std;
double geometricsum(int n){
    if(n==0){
        return 1;
    }
    
    return geometricsum(n-1)+(1/pow(2,n));
}
int main(){
int n;
cin>>n;
cout<<geometricsum(n)<<endl;

return 0;
}