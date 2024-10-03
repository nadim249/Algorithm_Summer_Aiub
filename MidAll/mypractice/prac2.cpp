#include<iostream>
using namespace std;
void increase1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){

int a=5;
int b=6;
increase1(a,b);
cout<<a;
cout<<endl;
cout<<b;

return 0;
}
