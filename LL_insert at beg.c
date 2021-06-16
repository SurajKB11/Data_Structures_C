#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start;
void insert(int x){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    (*temp).data=x;
    if(start==NULL){
        (*temp).next=NULL;
        start=temp;
    }
    else{
        (*temp).next=start;
        start=temp;
    }
}
void print(){
    struct node* temp;
    temp=start;
    while(temp!=NULL){
        printf("%d ",(*temp).data);
        temp=temp->next;
    }
}
int main()
{
    start=NULL;
    printf("how many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the number \n");
        scanf("%d",&x);
        insert(x);
    }
    print();
    return 0;
}

