#include<iostream>
using namespace std;
#include<climits>
class stackarray{
    int *data;
    int nextindex;
    int capacity;
    public:
    stackarray(int totalsize){
       data=new int[totalsize];
       nextindex=0;
       capacity=totalsize;

    }
    int size(){
       return nextindex;
    }
    int isempty(){
       return nextindex==0;
    }
    void push(int element){
       if(nextindex==capacity){
          cout<<"stack full " <<endl;
          return;
       }
       data[nextindex]=element;
       nextindex++;
    }
    int pop(){
       if(isempty()){
          cout<<"stack is empty"<<endl;
          return INT_MIN;
       }
       nextindex--;
       return data[nextindex];
    }
    int top(){
       return data[nextindex-1];
       if(isempty()){
          cout<<"stack is empty"<<endl;
          return INT_MIN;
       }
    }

};
int main(){
stackarray s(4);
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.size()<<endl;
cout<<s.isempty()<<endl;

return 0;
}