#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    Queue(){
        int size=100000;
        arr=new int[size];
    
        front=0;
         rear=0;
    }
    void enqueue(int data){
        if(rear==size){
            cout<<"queue full";
        }
        else{
        arr[rear]=data;
        rear++;
        }
        

    }
    void print(){
        for(int i=front;i<rear;i++){
            cout<<arr[i];
        }
    }
    int dequeue(){
        if(front==rear){
            return -1;
        }
        else{
            int a=arr[front];
            arr[front]=-1;

            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
             return a;
        }
       
    }
    void isEmpty(){
        if(front==rear){
            cout<<"empty queue";
        }
        else{
            cout<<"not empty";
        }
    }
    int qfront(){
        return arr[front];
    }
};
int main(){
    Queue q;
    q.enqueue(8);
    q.enqueue(8);
    q.dequeue();
    q.enqueue(6);
    q.enqueue(5);
    q.enqueue(3);
    q.isEmpty();
    
    q.print();
    
    return 0;

}