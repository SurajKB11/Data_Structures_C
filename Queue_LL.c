#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue(int ele){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
        front=temp;
        rear=temp;
        return;
    }
    rear->next=temp;
    rear=rear->next;
}
void dequeue(){
    struct node *temp;
    if(front==NULL && rear==NULL){
        printf("queue underflow");
        return;
    }
    temp=front;
    if(front==rear){
        front=NULL;
        rear=NULL;
        free(temp);
        return;
    }
    temp=front;
    front=front->next;
    free(temp);
}
void print(){
    struct node *temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    print();
    dequeue();
    print();
    return 0;
}
