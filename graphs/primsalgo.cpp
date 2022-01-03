#include<iostream>
#include<climits>
using namespace std;
int findminvertex(int *weight,bool *visited,int n){
    int minvertex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i] && (minvertex==-1 || weight[i]<weight[minvertex])){
            minvertex=i;
        }
    }
    return minvertex;
}
void prims(int **edge,int n){
    bool* visited=new bool[n];
    int* parent=new int[n];
    int* weight=new int[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
        weight[i]=INT_MAX;
    }
    parent[0]=-1;
    weight[0]=0;
   for(int i=0;i<n;i++){
    //find minvertex
       int minvertex=findminvertex(weight,visited,n);
    visited[minvertex]=true;
  //explore unvisited neigbhour
  for(int j=0;j<n;j++){
      if(edge[minvertex][j]!=0 && !visited[j]){
          if(edge[minvertex][j]<weight[j]){
              weight[j]=edge[minvertex][j];
              parent[j]=minvertex;

          }
      }
  }

   }
   for(int i=1;i<n;i++){
  if(parent[i]<i){
      cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
  }
  else{
      cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;

  }
   }

}
int main(){
int n,e;
cin>>n>>e;
int **edge=new int*[n];
for(int i=0;i<n;i++){
    edge[i]=new int[n];
    for(int j=0;j<n;j++){
        edge[i][j]=0;
    }
}
for(int i=0;i<e;i++){
int f,s,weight;
cin>>f>>s>>weight;
edge[f][s]=weight;
edge[s][f]=weight;
}
cout<<endl;
prims(edge,n);
for(int i=0;i<n;i++){
    delete [] edge[i];
}
delete [] edge;
return 0;
}