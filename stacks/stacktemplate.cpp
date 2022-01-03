#include<iostream>
using namespace std;
template<typename T>
class stack{
    T *data;
    int nextindex;
    int capacity;
    public:
    stack(){
        data=new T[4];
        nextindex=0;
        capacity=4;
    }
    int size(){
        return nextindex;
    }
    bool isempty(){
        return nextindex==0;
    }
    void push(T element){
        if(nextindex==capacity){
              T *newdata=new T[capacity*2];
        for(int i=0;i<capacity;i++){
            newdata[i]=data[i];
        }
        delete [] data;
        data=newdata;
        }
      data[nextindex]=element;
      nextindex++;
    }
    T pop(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        nextindex--;
        return data[nextindex];
    }
    T top(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return data[nextindex-1];
    }
};
int main(){
stack<char> s;
s.push(100);
s.push(101);
s.push(102);
s.push(103);
s.push(104);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.size()<<endl;
cout<<s.isempty()<<endl;
return 0;
}