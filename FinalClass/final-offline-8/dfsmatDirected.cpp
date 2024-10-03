
#include<bits/stdc++.h>
using namespace std;

void DFS(int **M,int s,int n){

    int *visited=new int[n];

    for(int i=0;i<n;i++){
        visited[i]=0;
    }

    stack<int> S;

    S.push(s);
    visited[s]=1;

    while(!S.empty()){
        int v=S.top();
        S.pop();
        cout<<v<<" ";

        for(int i=0;i<n;i++){

            if(visited[i]==0 && M[v][i] == 1){
                S.push(i);
                visited[i]=1;
            }
        }
    }



    }



void printGraph(int **M,int n){
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
 }





int main(){
    ifstream fin("dg.txt");
    int n,m;
    fin>>n>>m;

    int **M =new int *[n];

    for(int i=0;i<n;i++){
        M[i]=new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            M[i][j]=0;
        }
    }


    int u,v;
    for(int i=0;i<m;i++){
            fin>>u>>v;
       M[u][v]=1;
    }

    printGraph(M,n);

    cout<<endl<<"DFS is : ";

   DFS(M,0,n);

   cout<<endl;
    return 0;
}


