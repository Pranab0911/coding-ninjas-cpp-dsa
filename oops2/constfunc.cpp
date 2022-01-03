#include<iostream>
using namespace std;
class fraction{
   int numerator;
   int denominator;
   public:
fraction(int numerator,int denominator)
{
    this -> numerator=numerator;
    this -> denominator=denominator;
}
fraction(){

}
int getNumerator() const {//if we put const after the getters then the const function of object can call the getter 
       return numerator;
}
int getDenominator() const {
    return denominator;
}
void setNumerator(int n){
       numerator=n;
}
void setDenominator(int d){
    denominator=d;
}
void display() const {//we put const after only that function tjhat dosent change the value of the object fnc
    cout<< this -> numerator<<" / "<<denominator<<endl;
}
};
int main(){
fraction f1(10,3);
fraction f2(13,7);
fraction const f3;
cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<endl;
return 0;
}