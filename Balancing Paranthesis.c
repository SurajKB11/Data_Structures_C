#include<stdio.h>
#include<string.h>
int top=-1;
char stk[10];
void push(char);
char pop();
void main(){
    char exp[10],temp;
    int i,flag=1;
    printf("enter an exp : ");
    gets(exp);
    for(i=0;i<strlen(exp);i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
        push(exp[i]);
        if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        if(top==-1)
        flag=0;
        else{
            temp=pop();
            if(exp[i]==')'&&(temp=='{'||temp=='['))
            flag=0;
            if(exp[i]=='}'&&(temp=='('||temp=='['))
            flag=0;
            if(exp[i]==']'&&(temp=='{'||temp=='('))
            flag=0;
        }
    }
    if(top>0) // if(top>-1)
    flag=0;
    if(flag==1)
    printf("valid exp");
    else
    printf("invalid exp");
}
void push(char c){
    top=top+1;
    stk[top]=c;
}
char pop(){
    return stk[top--];
}

