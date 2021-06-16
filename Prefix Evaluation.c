#include <stdio.h>
#include<string.h>
int top=-1;
int stk[20];
void push(int ele){
    stk[++top]=ele;
}
int pop(){
    return stk[top--];
}
int main() {
    char expr[20];
    printf("enter an exp : ");
    gets(expr);
    int i,a,b,res;
    for(i=strlen(expr)-1;i>=0;i--){
        if(isdigit(expr[i])){
            int cnvrt=expr[i];
            cnvrt=cnvrt-48;
            push(cnvrt);
        }
        else{
            a=pop();
            b=pop();
            if(expr[i]=='+')
            res=a+b;
            if(expr[i]=='-')
            res=a-b;
            if(expr[i]=='/')
            res=a/b;
            if(expr[i]=='*')
            res=a*b;
            push(res);
        }
    }
    printf("%d\n",pop());
    return 0;
}
