
/*
6 9
0 1
0 2
1 3
1 2
2 3
3 4
4 5
4 1
4 0
10 12
0 8
8 2
8 9
2 1
2 4
9 1
1 3
1 7
7 6
6 5
3 5
3 4

*/
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

int findDeg(vector<int> *adjList,int a){
    int deg;
    deg = adjList[a].size();
    return deg;
}

void findDeg1(vector<int> *adjList,int a,int n){
    int deg;
    deg = adjList[a].size();
    cout<<"outDEg: "<<deg<<endl;
    int count1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<adjList[i].size();j++){
            if(adjList[i][j] == a){
                count1++;
            }
        }
    }

        cout<<"indeg: "<<count1<<endl;
}
int maxDEg(vector<int> *adjList,int n){
    int maxSize=INT_MIN;
      int maxdeg;
    for(int i=0;i<n;i++){
        int s=adjList[i].size();
        if(maxSize<s){
        maxSize=s;
        maxdeg=i;
        }
    }
    return maxdeg;
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
    ifstream fin("dg.txt");
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
    int a;
    cin>>a;
    //cout<<findDeg(adjList,a);
   findDeg1(adjList,a,n);
   cout<<endl;
   cout<<"Max deg is: "<<maxDEg(adjList,n);
    vector<int> *adjList2=new vector<int>[n];
   adjList2=transpose(adjList,n);
   printGraph(adjList2,n);
    return 0;
}
