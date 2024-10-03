
#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int start,int end){
   int pivot=a[end];
   int pIndex=start;
   for(int i=start;i<=end-1;i++){
    if(a[i]<=pivot){
        swap(a[i],a[pIndex]);
        pIndex++;
    }
   }
   swap(a[pIndex],a[end]);
   return pIndex;

}

 void quicksort(int a[],int start,int end){
     if(start< end){
        int pIndex=partition(a,start,end);
     quicksort(a,start,pIndex-1);
     quicksort(a,pIndex+1,end);
}
}

int main(){
   int n=10000;
    int *a=new int[n];
    srand(time(0));

    for(int i=0;i<n;i++){

        a[i]=rand()%100;
    }

     clock_t start3 = clock();
     quicksort(a,0,n-1);
    clock_t stop3 = clock();
     double duration3 = double(stop3 - start3)/ CLOCKS_PER_SEC * 1e6;

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout << "QuckSort Duration: " << duration3 << " microseconds" << endl;




return 0;
}
