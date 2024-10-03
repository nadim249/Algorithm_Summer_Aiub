#include<iostream>
using namespace std;
# define n 5
int front=-1;
int rear=-1;
int *queue=new int[n];

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
        queue[rear]=v;
        front=0;
    }else{
        rear++;
        queue[rear]=v;
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

void print(){
    if(isempty()){
cout<<"queue is empty"<<endl;
   }
    for(int i=front;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}

void frontElement(){
if(isempty()){
        return;
    }
    else{
        cout<< queue[front]<<endl;
    }
}
int main(){
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);

print();
dequeue();
enqueue(45);
frontElement();
print();


    return 0;
}