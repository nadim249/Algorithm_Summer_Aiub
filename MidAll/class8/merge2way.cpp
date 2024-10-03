#include<bits/stdc++.h>
using namespace std;


void Merge(int *A, int left,int mid,int right) {
    int n1=mid-left+1;
    int n2=right-mid;
    int *L=new int[n1];
    int *R=new int[n2];

    for(int i=0; i<=n1-1; i++){
        L[i]=A[left +i];
    }

     for(int j=0; j<=n2-1; j++){
        R[j]=A[mid +1+j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i <= n1 - 1 && j <= n2 - 1)
        {
        if (L[i] < R[j]) {
            A[k++] = L[i++];
        } else {
            A[k++] = R[j++];
        }
    }

    while (i <= n1 - 1) {
        A[k++] = L[i++];
    }

    while (j <= n2 - 1) {
        A[k++] = R[j++];
    }
}

void mergesort(int *A,int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(A,left,mid);
        mergesort(A,mid+1,right);
        Merge(A,left,mid,right);
    }
}

void printlist(int *p,int n){
    for(int i=0; i<n; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n = 10;
    int *a = new int[n];

    srand(time(0));
    for(int i=0; i<n; i++){

        a[i]=rand()%10+1;
    }

    printlist(a,n);

    int left=0;
    int right=n-1;

    mergesort(a,left,right);

    printlist(a,n);



    return 0;
}
