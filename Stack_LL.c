#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top;
void push(int ele){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=top;
    top=temp;
}
void pop(){
    if(top==NULL){
        printf("Stack Underflow\n");
        return;
    }
    struct node *temp;
    temp=top;
    top=top->next;
    free(temp);
}
void peek(){
    if(top==NULL){
        printf("Stack Underflow\n");
        return;
    }
    printf("%d\n",top->data);
}
void print(){
    struct node *temp;
    temp=top;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main() {
    top=NULL;
    push(1);print();
    push(2);print();
    push(3);print();
    pop();print();
    push(4);print();
    push(5);print();
    push(6);print();
    peek();
    return 0;
}
