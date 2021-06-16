#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(char c){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=c;
    temp->next=top;
    top=temp;
}
void pop(){
    struct node *temp;
    temp=top;
    top=top->next;
    free(temp);
}
char peek(){
    return top->data;
}
void reverse(char c[],int n){
    int i;
    for(i=0;i<n;i++)
    {
        push(c[i]);
    }
    for(i=0;i<n;i++){
        c[i]=peek();
        pop();
    }
}
int main() {
    char c[51];
    printf("enter a string : ");
    gets(c);
    reverse(c,strlen(c));
    printf("output = %s",c);
    return 0;
}
