
#include<iostream>
using namespace std;
class Stack{

private:
    int n;
    int top;
    int *s;

public:
    Stack(){
        n=5;
        top=-1;
        s=new int[n];
    }
    Stack(int n){
           this->n=n;
        top=-1;
        s=new int[n];
    }

bool isFull(){
    return top==n-1;
}


void push(int x){
    if(isFull()){
        cout<<"Full"<<endl;
        return;
    }else{
    s[++top]=x;
    }
}

bool isEmpty(){
    return top==-1;
}


void pop(){
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }else{
    top--;}
}



void printStack(){

    for(int i=top;i>=0;i--) cout<<s[i]<<endl;
    cout<<"---------"<<endl;
}

int findtop(){
   return top;
 }

};


int main(){
/*
Stack a;
a.push(10);
a.push(20);
a.printStack();
*/

Stack *a=new Stack(100);
a->push(10);
a->push(20);
a->push(30);
a->push(40);
a->printStack();


return 0;
}
