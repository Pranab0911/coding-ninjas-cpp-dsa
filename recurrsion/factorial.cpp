#include<iostream>
using namespace std;
int factorial(int n){
    cout<<n<<endl;
    if(n==0){
        return 1;
    }
    int smalloutput=factorial(n-1);
    return n*smalloutput;
}
int main(){
int n;
cin>>n;
int output=factorial(n);
cout<<output<<endl;
return 0;
}
/*
4      6*4                   
3      3*2                        
2    1*2                    
1    1*1                   
0     return 1              
*/