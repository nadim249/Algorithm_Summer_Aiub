#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    vector<int> adj[n];
    adj[0].push_back(10);
    adj[0].push_back(20);
    adj[0].push_back(30);
    adj[1].push_back(20);
    adj[1].push_back(200);
    adj[2].push_back(30);
    adj[3].push_back(40);

    for(int i=0;i<n;i++){
            cout<<i<<"->";
    for(int j=0;j<adj[i].size();j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;




return 0;

}
