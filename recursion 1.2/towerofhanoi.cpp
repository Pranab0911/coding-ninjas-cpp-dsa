#include<iostream>
using namespace std;
void towerofhanoi(int n,char source,char destination,char helper){
    if(n==0){
        return ;
    }
    towerofhanoi(n-1,source,helper,destination);
    cout<<"Move from "<<source<<" to "<<destination<<endl;
    towerofhanoi(n-1,helper,destination,source);
}

int main(){
towerofhanoi(3,'A','C','B');

return 0;
}