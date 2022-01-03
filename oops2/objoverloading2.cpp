#include<iostream>
using namespace std;
class fraction{
private:
  int numerator;
  int denominator;
  public:
  fraction(int numerator,int denominator){
      this -> numerator=numerator;
      this -> denominator=denominator;
  }
  void display(){
      cout<<this -> numerator<<" / "<<denominator<<endl;
  }
  void simplify(){
      int gcd=1;
      int j=min(this -> numerator, this -> denominator);
      for(int i=1;i<=j;i++){
          if(this -> numerator%i==0 && this -> denominator%i==0){
              gcd=i;
          }
      }
      this -> numerator=this -> numerator/ gcd;
      this -> denominator=this -> denominator/ gcd;
  }
 // void add(fraction const &f2){ 
  fraction add(fraction const &f2){// we are puting fraction class because we will create fraction f3=f1.add(f2);
      int lcm = denominator * f2.denominator;
      int x = lcm / denominator;
      int y = lcm / f2.denominator;
      int num = x * numerator + (y*f2.numerator);
      //numerator=num; 
      //denominator=lcm;
      fraction fnew(num,lcm);
      fnew.simplify();
      return fnew;
  }
  fraction operator+(fraction const &f2) const{// we are putting operator + so that : fraction f4=f1+f2;
      int lcm = denominator * f2.denominator;
      int x = lcm / denominator;
      int y = lcm / f2.denominator;
      int num = x * numerator + (y*f2.numerator);
      //numerator=num; 
      //denominator=lcm;
      fraction fnew(num,lcm);
      fnew.simplify();
      return fnew;
  }
  fraction operator*(fraction const &f2) const{//this is used for multipy operator : f6=f1*f2;
      int n= numerator * f2.numerator;
      int d= denominator * f2.denominator;
      fraction fnew(n,d);
      fnew.simplify();
      return fnew;
  }
  bool operator==(fraction const &f2) const{// this operator is used to check the equality 
      return (numerator == f2.numerator && denominator == f2.denominator);
  }
//   void operator++(){
//       numerator=numerator+denominator;
//       simplify();
  
//   }
//pre increment
fraction& operator++(){
    numerator=numerator+denominator;
    simplify();
    return *this;//this will return the the whole value of f1
}
//post increment
fraction operator++(int){
    fraction fnew(numerator,denominator);
    numerator=numerator+denominator;
    simplify();
    fnew.simplify();
    return fnew;
}
};
int main(){
fraction f1(10,2);
fraction f2(15,4);
f1.display();
//pre incremnet
// ++f1;
// f1.display();
/*fraction f3=++f1;
f3.display();   output=6/1*/
//fraction f3=++(++f1);
//f1.display();this will give 6/1
//f1.display();//this will give 7/1 after passing refernce to fraction operator++ function

//f3.display();//this will give 7/1
//post increment
fraction f3=f1++;
f1.display();// output=6/1
f3.display();//output=5/1


// fraction f3 = f1.add(f2);//add function using another object
// fraction f4=f1+f2;// + operator is used
// fraction f5=f1*f2;// * operator is used
// f1.display(); 
// f2.display();
// f3.display();//add fnc is called
// f4.display();//+ operartor
// f5.display();//*  operator
// if(f1==f2){
//     cout<<"equal"<<endl;
// }
// else{
//     cout<<"not equal"<< endl;
// }
// return 0;
}