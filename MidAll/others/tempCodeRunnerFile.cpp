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