#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int *q;
    int size;
    
    Queue(int n){
        q=new int[n];
        size=n;
        front=-1;
        rear=-1;
    }
    void push(int ele){  //enqueue
        if(rear==size-1){
            cout<<"Overflow"<<endl;
            return;
        }
        else{
            if(front==-1){
                front++;
            }
            rear++;
            q[rear]=ele; 
        }
    }
    int pop(){  //dequeue
        if(front==-1){
            cout<<"Underflow"<<endl;
        }
        else{
            return q[front++];
        }
    }
    int top(){
        if(front==-1){
            cout<<"Underflow"<<endl;
            return -1;
        }
        else{
            return q[front];
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<q[i]<<" ";
        }
    }
};
int main(){
   Queue q1(5);
   q1.push(3);
   q1.push(44);
   q1.push(24);
   q1.push(64);
   q1.pop();
   q1.display();

}