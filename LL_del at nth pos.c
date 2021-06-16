#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void insert(int ele){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=NULL;
    temp->next=head;
    head=temp;
}
void delete(int pos){
    struct node *temp1=head;
    if(pos==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<pos-2;i++){
        temp1=temp1->next;
    }
    struct node *temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}
void print(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main(){
    head=NULL;
    int i,pos;
    for(i=0;i<6;i++)
    {
        insert(i);
    }
    printf("after insertion : \n");
    print();
    printf("enter pos to delete : ");
    scanf("%d",&pos);
    delete(pos);
    printf("\nafter deleting pos %d\n",pos);
    print();
}
