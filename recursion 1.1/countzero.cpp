#include<iostream>
using namespace std;
int countzero(int n){
    if(n<=9){
        if(n==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int lastdigit=n%10;
    int count=0;
    if(lastdigit==0){
        count=1;
    }
    return count+countzero(n/10);

}
int main(){
int n;
cin>>n; 
cout<<countzero(n)<<endl;
return 0;
}