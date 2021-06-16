#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start;
void insert(int ele){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        struct node *ptr;
        ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void reverse(struct node *p){
    if(p->next==NULL){
        start=p;
        return;
    }
    reverse(p->next);
    struct node *q=p->next;
    q->next=p;
    p->next=NULL;
}
void print(struct node *temp){
    temp=start;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main(){
    start=NULL;
    int i;
    for(i=1;i<=6;i++){
        insert(i);
    }
    reverse(start);
    print(start);
}
