#include<vector>
#include<iostream>
using namespace std;

class PriorityQueue{
  vector<int> pq;
  public:
PriorityQueue(){

}
bool isEmpty(){
    return pq.size()==0;
}
int getSize(){
    return pq.size();
}
int getMin(){
    if(isEmpty()){
        return 0;
    }
    return pq[0];

}
};