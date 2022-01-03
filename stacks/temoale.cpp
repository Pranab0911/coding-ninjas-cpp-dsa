#include<iostream>
using namespace std;
template<typename T,typename V>
class Pair{
    T x;
    V y;
    public:
    void setx(T x){
        this -> x = x;
    }
    T getx(){
        return x;
    }
    void sety(V y){
        this -> y = y;
    }
    V gety(){
        return y;
    }
};
int main(){
Pair<Pair<int,int>,int> p1;
p1.sety(90);
Pair<int,int> p2;
p2.setx(70);
p2.sety(80);

p1.setx(p2);
cout<<p1.getx().getx()<<" "<<p1.gety()<<endl;// 70 90
cout<<p1.getx().gety()<<" "<<p1.gety()<<endl;// 80 90
cout<<p1.getx().getx() <<" "<< p1.getx().gety() <<" "<<p1.gety()<<endl;// 70 80 90







// Pair<int,int> p1;
// p1.setx(10);
// p1.sety(20.09);
// cout<<p1.getx()<<" "<<p1.gety()<<endl;


	// Pair<double> p2;

	// p2.setx(100.34);
	// p2.sety(34.21);
	// cout << p2.getx() << " " << p2.gety() << endl;
}