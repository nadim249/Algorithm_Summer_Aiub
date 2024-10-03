#include<bits/stdc++.h>
using namespace std;
void BFS(int **M,int s,int n){
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
        for(int i=0;i<n;i++){
            if(M[u][i] ==1){
               int neibour=i;
            
             if(visited[neibour] == 0){
                visited[neibour]=1;
                Q.push(neibour);
                dist[neibour]=dist[u]+1;
            }
            }
        }

        }
        cout<<"\nDistance form " <<s<<" to ";
        for(int i=0;i<n;i++){
            cout<<i<<" : ";
            cout<<dist[i]<<endl;
    }
}
void printGraph(int **M,int n){

       for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<M[i][j]<<" ";

        }
        cout<<endl;
    }
 }





int main(){
    ifstream fin("ug.txt");
    int n,m;
    fin>>n>>m;

    int **M =new int *[n];
     for(int i=0;i<n;i++){
        M[i]=new int[n];
    }

    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            M[i][j]=0;
        }
    }

    int u,v;
    for(int i=0;i<m;i++){
            fin>>u>>v;
        M[u][v]=1;
        M[v][u]=1;
    }

    printGraph(M,n);
    cout<<endl;

    BFS(M,2,n);
    return 0;
}


