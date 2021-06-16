#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node* start;
void insert_end(int ele){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=NULL;
    if(start==NULL){
        temp->prev=NULL;
        start=temp;
        return;
    }
    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    temp->prev=ptr;
    ptr->next=temp;
}
void reverse(){
    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL)ptr=ptr->next;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->prev;
    }
}
void display(){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void main(){
    start=NULL;
    int i;
    for(i=1;i<=6;i++)
    insert_end(i);
    display();
    printf("\n");
    reverse();
}
