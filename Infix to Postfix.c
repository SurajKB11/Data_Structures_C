#include <stdio.h>
#include <string.h>
char stack[20];
int top=-1;
void push(char x){
    stack[++top]=x;
}
char pop(){
    return stack[top--];
}
int priority(char x){
    if(x=='(')
    return 0;
    if(x=='+'||x=='-')
    return 1;
    if(x=='*'||x=='/')
    return 2;
}
int main() {
    char expr[20],x;
    printf("enter the exp : ");
    gets(expr);
    int i;
    for(i=0;i<strlen(expr);i++){
        if(isalnum(expr[i]))
        printf("%c",expr[i]);
        else if(expr[i]=='(')
        push(expr[i]);
        else if(expr[i]==')'){
            while((x=pop())!='(')
            printf("%c",x);
        }
        else{
            while(priority(stack[top])>=priority(expr[i]))
            printf("%c",pop());
            push(expr[i]);
        }
    }
    while(top!=-1){
        printf("%c",pop());
    }
    return 0;
}
