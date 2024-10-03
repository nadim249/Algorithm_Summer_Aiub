#include<bits/stdc++.h>
using namespace std;
void DFS(vector<int>*adj,int v,bool visited[]){
  

    visited[v] = true;
    cout << v << " ";

    for(int i = 0; i < adj[v].size(); i++) {
        int next = adj[v][i];
        if(!visited[next]) {
            DFS(adj,next,visited);
        }
    }
}
void printGraph(vector<int> *adjList,int n){
    for(int i=0;i<n;i++){
        cout<<i<<"-->";
        for(int j=0;j<adjList[i].size();j++){
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;

    }
 }





int main(){
    ifstream fin("ug.txt");
    int n,m;
    fin>>n>>m;

    vector<int> *adjList=new vector<int>[n];
    int u,v;
    for(int i=0;i<m;i++){
            fin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    printGraph(adjList,n);
    cout<<endl;
 bool visited[n];

    for(int i=0;i<n;i++){
        visited[i]=0;
    }

DFS(adjList,0,visited);
   delete[] adjList;
    return 0;
}

