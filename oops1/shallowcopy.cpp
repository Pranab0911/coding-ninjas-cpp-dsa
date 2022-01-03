#include<iostream>
using namespace std;
class student{
   private:
   int age;
   char *name;

   public:
   student(int age,char *name){
       this -> age=age;
       this -> name=name;
   }
   void display(){
     cout<<age<<" "<<name<<endl;
   }
};
int main(){
char name[]="abcd";
student s1(25,name);
s1.display();

name[3]='p';
student s2(55,name);
s2.display();
s1.display();
return 0;
}