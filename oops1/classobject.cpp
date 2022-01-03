#include<iostream>
using namespace std;
class student{
  public:
  int age;
  int rollno;
  void display(){
      cout<<"constructor created!"<<endl;
  }
};
int main(){
  student s1;
  s1.age=18;
  s1.rollno=27;
  cout<<s1.age<<endl;
  cout<<s1.rollno<<endl;
  student *s2=new student;
  s2 -> age=52;
  s2 -> rollno=102;
  cout<<s2->age<<endl;
  cout<<s2->rollno<<endl;

return 0;
}