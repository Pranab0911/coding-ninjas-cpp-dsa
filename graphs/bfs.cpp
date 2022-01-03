#include<iostream>
#include<queue>
using namespace std;
void bfs(int **edges,int v,int sv){
      queue<int> q;
      bool* visited=new bool[v];
      for(int i=0;i<v;i++){
          visited[i]=false;
      }
      q.push(sv);

      visited[sv]=true;
      while(!q.empty()){
          int front=q.front();
          q.pop();

          cout<<front<<endl;
          for(int i=0;i<v;i++){
              if(edges[front][i]==1 && !visited){
                  q.push(i);

                  visited[i]=true;
              }
          }
      }
      delete [] visited;
}
int main(){
int v,e;
cin>>v>>e;
int **edges=new int*[v];
for(int i=0;i<v;i++){
    edges[i]=new int[v];
    for(int j=0;j<v;j++){
        edges[i][j]=0;
    }
}
for(int i=0;i<e;i++){
    int f,s;
    cin>>f>>s;
    edges[f][s]=1;
    edges[s][f]=1;

}
bool* visited=new bool[v];
for(int i=0;i<v;i++){
    visited[i]=false;
}
cout<<"bfs  : "<<endl;
bfs(edges,v,0);
delete [] visited;
for(int i=0;i<v;i++){
    delete [] edges[i];
}
delete [] edges;
return 0;
} 