#include<iostream>
#include<vector>
using namespace std;
vector<int>* getpathdfshelper(int **edges,int n,int sv,int ev,bool* visited){
if(sv==ev){
    vector<int>* output=new vector<int>();
     output->push_back(ev);
     return output;
}
visited[sv]=true;
for(int i=0;i<n;i++){
    if(edges[sv][i] && !visited[i]){
        vector<int>* smalloutput=getpathdfshelper(edges,n,i,ev,visited);
        if(smalloutput!=NULL){
            smalloutput->push_back(sv);
            return smalloutput;
        }
    }
}
return NULL;
}
vector<int>* getpathdfs(int **edges,int n,int sv,int ev){
bool* visited= new bool[n];
for(int i=0;i<n;i++){
    visited[i]=false;
}
vector<int>* output=getpathdfshelper(edges,n,sv,ev,visited);
delete [] visited;
return output;
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
int sv,ev;//start vertice && end vertice
cin>>sv>>ev;
vector<int>* output=getpathdfs(edges,n,sv,ev);
if(output!=NULL){
for(int i=0;i<output->size();i++){
   cout<<output->at(i)<<endl;
}
}
else{
cout<<"no path found "<<endl;
}
for(int i=0;i<n;i++){
    delete [] edges[i];
}
delete [] edges;
return 0;
}