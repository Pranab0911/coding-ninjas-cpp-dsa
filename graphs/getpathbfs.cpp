#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
vector<int>* getPathbfs(int **edges,int n,int startingvertice,int endingvertice){
    queue<int> q;
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    q.push(startingvertice);
  bool done=false;
unordered_map<int,int> parent;
    while(!q.empty() && !done){
        int front=q.front();
        q.pop();
        for(int i=0;i<n;i++){
        if(edges[front][i]==1 && !visited[i]){
            parent[i]=front;
         q.push(i);
         visited[i]=true;   
        
        if(i==endingvertice){
             done=true;
             break;
        }
        }
         }  
        
    }
    if(!done){
        return NULL;
    }
    else{
        vector<int>* output=new vector<int>();
        int current=endingvertice;
        output->push_back(endingvertice);
        while(current!=startingvertice){
            current=parent[current];
            output->push_back(current);
        }
        return output;
    }
    delete [] visited;
}
int main(){
int n,e;
cin>>n>>e;
int **edges=new int*[n];
for(int i=0;i<n;i++){
    edges[i]=new int[n];
    for(int j=0;j<n;j++){
        edges[i][j]=0;
    }
}
for(int i=0;i<e;i++){
    int f,s;
    cin>>f>>s;
    edges[f][s]=1;
    edges[s][f]=1;
}
int startingvertice,endingvertice;
cin>>startingvertice>>endingvertice;
vector<int>* output=getPathbfs(edges,n,startingvertice,endingvertice);
if(output!=NULL){
    for(int i=0;i<output->size();i++){
        cout<<output->at(i)<<endl;
    }
}
delete[] output;
for(int i=0;i<n;i++){
    delete[] edges[i];
}
delete [] edges;
return 0;
}