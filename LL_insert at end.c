#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
void insert(int ele){
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=ele;
    ptr->next=NULL;
    if(start==NULL){
        start=ptr;
    }
    else{
        struct node *temp;
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
    }
    
}
void display(){
    struct node *temp;
    temp=start;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
int n,ele;
printf("how many elements?");
scanf("%d",&n);
int i;
printf("\nenter elements:");
for(i=0;i<n;i++){
    scanf("%d",&ele);
    insert(ele);
}
display();
    return 0;
}

