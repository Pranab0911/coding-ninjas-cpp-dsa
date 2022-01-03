#include<iostream>
#include<climits>
using namespace std;
class dynamicstack{
    int *data;
    int nextindex;
    int capacity;
    public:
    dynamicstack(){
       data=new int[4];
       capacity=4;
       nextindex=0;
    }
    int size(){
        return nextindex;
    }
    int isempty(){
        return nextindex==0;
    }
    void push(int element){
      if(nextindex==capacity){
        //   cout<<"stack is full"<<endl;
        //   return;
        int *newdata=new int [capacity*2];
        
        for(int i=0;i<capacity;i++){
            newdata[i]=data[i];
        }
        capacity*=2;
        delete [] data;
        data=newdata;
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
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        return data[nextindex-1];
    }
};
int main(){
dynamicstack s;
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