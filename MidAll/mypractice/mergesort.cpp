#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int left,int mid,int right){
    int n1=mid -left+1;
    int n2=right -mid;
    int L[n1];
    int R[n2];

    for(int i=0;i<=n1-1;i++){
        L[i]=a[left+i];
    }
    for(int j=0;j<=n2-1;j++){
        R[j]=a[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=left;

    while(i<=n1-1 && j<=n2-1){
        if(L[i] < R[j]){
            a[k++]=L[i++];
        }else{
            a[k++]=R[j++];
        }
    }
    while(i<=n1-1){
        a[k++]=L[i++];
    }
    while(j<=n2-1){
        a[k++]=R[j++];
    }

}

 void mergesort(int a[],int left,int right){
     if(left<right){
    int mid=(left+right)/2;
    mergesort(a,left,mid);
    mergesort(a,mid+1,right);
    merge(a,left,mid,right);
}}

int main(){
    int n=7;
    int a[n] ={4,3,8,9,6,2,5};

    mergesort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

return 0;
}
