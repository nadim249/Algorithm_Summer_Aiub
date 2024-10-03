#include<iostream>
using namespace std;

void rightrotate(int A[],int n,int k){
int temp[n];
for(int i=0;i<n;i++){
    temp[i]=A[i];
}
for(int i=0; i<n;i++){
    A[i]=A[i+k];
}

for(int i=0;i<n;i++){
    A[i+n-k]=temp[i];
}
}

void printArray(int A[],int n){
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}
cout<<endl;
}


int main(){
int A[6]={1,3,6,11,12,17};
int k=4;
rightrotate(A,6,k);
printArray(A,6);



return 0;
}
