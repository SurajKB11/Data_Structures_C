#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start;

int main()
{
    start=(struct node*)malloc(sizeof(struct node));
    (*start).data=5;
    (*start).next=NULL;
    printf("%d",(*start).data);

    return 0;
}
