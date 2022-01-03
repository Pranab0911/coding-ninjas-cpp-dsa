#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int temp2=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(temp2);
}
void sort12(vector<int> &v){
    if(v.size()==1){
        return;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    sort12(v);
insert(v,temp);
}

int main(){
vector<int> v={4,6,3,2,1};
sort12(v);
for(auto i : v){
    cout<<i<<" ";
}

return 0;
}