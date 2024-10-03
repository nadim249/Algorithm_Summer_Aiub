#include<bits/stdc++.h>
using namespace std;


void indegreeOutdegree(int V,int a,vector<int>adj[]){

    cout<<"outdeg of "<<a<<" is "<<adj[a].size();

    cout<<endl;

    int indgree=0;

    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();j++){
            if(adj[i][j] == a){
               indgree++;
            }
        }
    }

    cout<<"Indegree of "<<a<<" is "<<indgree<<endl;

}

int main(){
    int V;
    int E;

    cin>>V>>E;

    vector<int> *adj=new vector<int>[V];
    int u,v;
    for(int i=0;i<E;i++){
        cin>>u>>v;
    adj[u].push_back(v);
    //adj[v].push_back(u);


    }

    for(int i=0;i<V;i++){
            cout<<i<<"->";
    for(int j=0;j<adj[i].size();j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;


    /*
    for(int i=0;i<V;i++){
        cout<<"outdeg of "<<i<<" -is "<<adj[i].size()<<endl;
    }
    int indgree=0;

    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();j++){
            if(adj[i][j] == 1){
               indgree++;
            }
        }
    }

    cout<<"Indegree: "<<indgree<<endl;*/

    int a;
    cin>>a;

   indegreeOutdegree(V,a,adj);



return 0;

}
