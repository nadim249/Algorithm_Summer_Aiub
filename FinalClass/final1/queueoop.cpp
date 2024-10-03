#include<iostream>
using namespace std;

class Queue{
    private:
    int n;
    int front=-1;
    int rear=-1;
    int *q;
    public:
    Queue(){
        n=5;
        q=new int[n];
    }

    Queue(int n){
        this->n=n;
        q=new int[n];
    }

    
bool isfull(){
    return rear==n-1;
}

bool isempty(){
    return front==-1 && rear==-1;
}

void enqueue(int v){
    if(isfull()){
        cout<<"queue is full"<<endl;
        return;
    }else if(isempty()){
        rear=0;
        q[rear]=v;
        front=0;
    }else{
        rear++;
        q[rear]=v;
    }

}

void dequeue(){
    if(isempty()){
        return;
    }else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}


void frontElement(){
if(isempty()){
        return;
    }
    else{
        cout<< q[front]<<endl;
    }
}

void print(){
    if(isempty()){
cout<<"queue is empty"<<endl;
   }
    for(int i=front;i<=rear;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

};

int main(){
/*
Queue a;
a.enqueue(10);
a.enqueue(20);
a.print();
*/
    Queue *a=new Queue(10);
    a->enqueue(23);
    a->enqueue(30);
    a->enqueue(55);
    a->enqueue(40);
    a->enqueue(34);

    a->frontElement();
    a->print();

    a->dequeue();
    a->print();



    return 0;
}