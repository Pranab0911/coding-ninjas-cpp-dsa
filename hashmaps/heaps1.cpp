#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
unordered_map<string,int> mp;
//insert 
pair<string,int> p("abc",1);//this is the first method of inserting in the maps
mp.insert(p);
mp["def"]=1;// this is the second method of inserting in the map

//find or access 
cout<<mp["abc"]<<endl;
cout<<mp.at("abc")<<endl;//this is the second technique to access elements
cout<<"size: "<<mp.size()<<endl;
cout<<mp["ghi"]<<endl;// this will give zero because if we insert value which not 
//inserted before in the square bracket then it will give zero
//cout<<mp.at("ghi")<<endl;//this will give error
cout<<"size: "<<mp.size()<<endl;

//check presence 
if(mp.count("ghi")>0){
    cout<<"ghi si present "<<endl;
}
//erase
cout<<mp.erase("ghi")<<endl;
cout<<"size:  "<<mp.size()<<endl;
return 0;
}