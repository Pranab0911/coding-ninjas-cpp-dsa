#include<iostream>
using namespace std;
#include  "student.cpp"
int main(){
  student s1;
 //after creating object constructor is automatically called

  s1.display();
 student s2;

  student *s3=new student;
  s3 -> display();
    
  student s4(10);
  s4.display();

  student *s5=new student(100);
  s5 -> display(); 

  student s6(99,1000);
  s6.display();
return 0;
}