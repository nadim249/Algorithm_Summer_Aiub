#include<bits/stdc++.h>
using namespace std;
void BFS(vector<int>*adjList,int s,int n){
    queue<int>Q;

    int *dist=new int[n];
    int *visited=new int[n];

    for(int i=0;i<n;i++){
        dist[i]=0;
        visited[i]=0;
    }

    Q.push(s);
    visited[s]=1;

    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        cout<<u<<" ";
        for(int i=0;i<adjList[u].size();i++){
            int neibour =adjList[u][i];
            if(visited[neibour] == 0){
                visited[neibour]=1;
                Q.push(neibour);
                dist[neibour]=dist[u]+1;
            }
        }

        }
        cout<<"\nDistance form " <<s<<" to ";
        for(int i=0;i<n;i++){
            cout<<i<<" : ";
            cout<<dist[i]<<endl;
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

BFS(adjList,2,n);
   delete[] adjList;
    return 0;
}

