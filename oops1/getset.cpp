#include<iostream>
using namespace std;
class student{
  private:
  int age;
  public:
  int rollno;
  
  void display(){
      cout<<"display function called!"<<endl;
      cout<<age<<" "<<rollno<<endl;
  }
  int getage(){   //getter
    return age;
  }
  //setters
  void setage(int a){
      age=a;
  }
};
int main(){
  student s1;
  //s1.getage=18;
  s1.rollno=27;
  cout<<"s1 age: " <<s1.getage()<<endl;//getters
  cout<<  "s1 rolllno: " <<s1.rollno<<endl;

//setting age value
  s1.setage(29);
  s1.display();
  
  //dynamically created object

  student *s2=new student;
  //s2 -> age=52;
  s2 -> rollno=102;
  cout<<  "s2 age: " <<s2->getage()<<endl;
  cout<< "s2 rollno: " <<s2->rollno<<endl;

return 0;
}