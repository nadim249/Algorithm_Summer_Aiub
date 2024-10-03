#include<bits/stdc++.h>
using namespace std;
void DFS(vector<int>*adjList,int s,int n){
    bool visited[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    stack<int> S;
    S.push(s);
    visited[s]=true;

    while(!S.empty()){
        int v=S.top();
        S.pop();
        cout<<v<<" ";
        for(int i=0;i<adjList[v].size();i++){
            int nei=adjList[v][i];

            if(!visited[nei]){
                S.push(nei);
                visited[nei]=true;
            }
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

DFS(adjList,0,n);
   delete[] adjList;
    return 0;
}

