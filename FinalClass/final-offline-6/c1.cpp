#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<int> *adjList,int n){
    for(int i=0;i<n;i++){
        cout<<i<<"-->";
        for(int j=0;j<adjList[i].size();j++){
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;

    }
 }

vector<int>*transpose(vector<int> *adjList,int n){
    vector<int> *adjList2=new vector<int>[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<adjList[i].size();j++){
            adjList2[adjList[i][j]].push_back(i);
            }}
    return adjList2;
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
    vector<int> *adjList2=new vector<int>[n];
   adjList2=transpose(adjList,n);
   printGraph(adjList2,n);

   delete[] adjList;
   delete[] adjList2;
    return 0;
}

