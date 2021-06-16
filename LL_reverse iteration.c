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
void print(){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void reverse(){
    struct node *current,*prev,*next;
    current=start;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    start=prev;
}
void main(){
    start=NULL;
    int i;
    for(i=1;i<=6;i++){
        insert(i);
    }
    print();
    printf("\n");
    reverse();
    print();
}
