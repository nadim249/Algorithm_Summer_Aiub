#include<bits/stdc++.h>
using namespace std;


int *merge(int *a, int *b, int n, int m) {

    int i = 0;
    int j = 0;
    int k = 0;

    int *C = new int[n+m];

    while (i <= n - 1 && j <= m - 1)
        {
        if (a[i] > b[j]) {
            C[k++] = b[j++];
        } else {
            C[k++] = a[i++];
        }
    }

    while (i <= n - 1) {
        C[k++] = a[i++];
    }

    while (j <= m - 1) {
        C[k++] = b[j++];
    }
     return C;
}


void printlist(int *p,int n){
    for(int i=0; i<n; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n = 5;
    int *a = new int[n];
    int *b = new int[n];

    //srand(time(0));

    for(int i=0; i<n; i++){
        a[i]=i+2;
        b[i]=i+5;
    }
    printlist(a,n);
    printlist(b,n);

    int *m=merge(a,b,5,5);

    printlist(m,10);



    return 0;
}
