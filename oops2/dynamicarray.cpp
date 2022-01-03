#include<iostream>
using namespace std;
class dynamic{
  private:
  int *data;
  int capacity;
  int nextindex;
  public:
  dynamic(){
      data=new int[5];
      capacity=5;
      nextindex=0;
  }
  void add(int element){
      if(nextindex==element){
          int *newdata=new int [2*capacity];
          for(int i=0;i<capacity;i++){
              newdata[i]=data[i];
          }
          delete [] data;
          data=newdata;
          capacity*=2;
      }
      data[nextindex]=element;
       nextindex++;
  }
};

int main(){

return 0;
}