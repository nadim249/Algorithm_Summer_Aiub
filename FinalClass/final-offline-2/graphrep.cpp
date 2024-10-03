#include<bits/stdc++.h>

using namespace std;

int findDeg(int a,int n,int **M){
    int count=0;
    for(int i=0;i<n;i++){
        if(M[a][i] ==1 ){
            count++;
        }
    }
    return count;
}

void inOutdeg(int s,int n,int **M){
      int id=0;
    int od=0;

    for(int i=1; i<n;i++){
        if(M[s][i] ==1){
            od++;
        }
        if(M[i][s] ==1){
            id++;
        }

        }
    cout<<"indegree " <<id<<" "<<"outdegree "<<od<<endl;
}


int main(){
    int n,m;
    cin>>n>>m;
    //dynamic 2d array
    int **M =new int*[n];

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
        cin>>u>>v;
        M[u][v]=1;
        //M[v][u]=1;
    }

       for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<M[i][j]<<" ";

        }
        cout<<endl;
    }

    cout<<endl;

    //int d;
    //cout<<"enter to find deg: ";
    //cin>>d;
   // int deg =findDeg(d,n,M);

    cout<<"Degree "<<d<<" is: " <<deg<<endl;



    int s;
    cout<<"enter to see id and od" ;
    cin>>s;

    inOutdeg(s,n,M);

       }
