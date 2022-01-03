#include<iostream>
#include<cstring>
using namespace std;
class student{
 int age;
 char *name;
 public:
 student(int age,char *name){
     this -> age=age;
     this -> name=new char[strlen(name)+1];
     strcpy(this -> name,name); 
 }
 void display(){
     cout<<age<<" "<<name<<endl;
 }
};
int main(){
    char name[]="abcd";
    student s1(23,name);
    s1.display();
    name[3]='p';
    student s2(33,name);
    s1.display();
    s2.display();

return 0;
}