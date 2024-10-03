#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout("G.txt");
    int n=10;
    fout<<n<<endl;
    srand(time(0));
    int cnt =0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i != j){
                double p =(rand()%100+1)/100.0;
                if(p>=0.8){
                    cnt++;
                    fout<<i<<" "<<j<<endl;
                }

            }
        }
    }
    fout<<cnt<<endl;

return 0;
}
