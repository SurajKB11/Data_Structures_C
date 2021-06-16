#include <stdio.h>
int a[10];
int front=-1,rear=-1;
void enqueue(int ele){
    if(rear==9){
        printf("queue overflow");
        return;
    }
    if(front==-1&&rear==-1){
        front=0;
        rear=0;
    }
    else{
        rear=rear+1;
    }
    a[rear]=ele;
}
void dequeue(){
    if(rear==-1&&front==-1){
        printf("queue underflow");
        return;
    }
    if(front==rear){
        rear=-1;
        front=-1;
    }
    else{
        front=front+1;
    }
}
void print(){
    int i;
    for(i=front;i<=rear;i++)
    printf("%d ",a[i]);
    printf("\n");
}
int main() {
    enqueue(2);
    enqueue(5);
    enqueue(7);
    print();
    dequeue();
    print();
    return 0;
}
