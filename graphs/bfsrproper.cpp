#include<iostream>
#include<queue>
using namespace std;
void printbfs(int **edges,int n,int sv,bool* visited){
   queue<int> pendingvertices;
   pendingvertices.push(sv);
   visited[sv]=true;
   while(!pendingvertices.empty()){
       int frontvertice=pendingvertices.front();
       pendingvertices.pop();
       cout<<frontvertice<<endl;
       for(int i=0;i<n;i++){
           if(edges[frontvertice][i]==1 && !visited[i]){
               pendingvertices.push(i);
               visited[i]=true;
           }
       }
   }
}
void BFS(int **edges,int n){
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            printbfs(edges,n,i,visited);
        }
    }
    delete[] visited;
}
int main(){
int n,e;
cin>>n>>e;
int **edges=new int*[n];
for(int i=0;i<n;i++){
 edges[i]=new int[n];
 for(int j=0;j<n;j++){
     edges[i][j]=false;
 }
}
for(int i=0;i<e;i++){
    int f,s;
    cin>>f>>s;
    edges[f][s]=1;
    edges[s][f]=1;
}
cout<<"bfs "<<endl;
BFS(edges,n);
return 0;
}