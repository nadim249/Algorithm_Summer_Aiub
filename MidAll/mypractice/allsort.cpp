#include<bits/stdc++.h>
#include <sys/time.h>
using namespace std;

 void bubbleSort(int *a,int n){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
 void insertionSort(int *a,int n){
     int value;
    int i;
    for(int j=1;j<=n-1;j++){
        value=a[j];
    i=j-1;
    while(i>=0 && a[i]>value){
       swap(a[i],a[i+1]);
      // a[i+1]=a[i];
        i--;
    }
    //a[i+1]=value;

    }
}
 void selectionSort(int *p,int n){
     int inM;
    for(int i=0;i<=n-1;i++){
            inM=i;
     for(int j=i+1;j<=n-1;j++){
        if(p[j]<p[inM]){
            inM=j;
        }
        swap(p[inM],p[i]);
     }

    }
}
int main(){
    int n=100000;
    int *a=new int[n];
    srand(time(0));

    for(int i=0;i<n;i++){

        a[i]=rand()%100;
    }

     clock_t start3 = clock();

    bubbleSort(a,n);
    clock_t stop3 = clock();
 double duration3 = double(stop3 - start3)/ CLOCKS_PER_SEC * 1e6;
    cout << "bubbleSort Duration: " << duration3 << " microseconds" << endl;

 clock_t start = clock();
insertionSort(a,n);
    clock_t stop = clock();
    double duration = double(stop - start) / CLOCKS_PER_SEC * 1e6;
    cout << "insertionSort Duration: " << duration << " microseconds" << endl;

 clock_t start2 = clock();
     selectionSort(a,n);
    clock_t stop2 = clock();
    double duration2 = double(stop2 - start2) / CLOCKS_PER_SEC * 1e6;
    cout << "SelectionSort Duration: " << duration2 << " microseconds" << endl;


   // for(int i=0;i<n;i++){
   //     cout<<a[i]<<endl;
  //  }
   // cout<<endl;


return 0;
}
