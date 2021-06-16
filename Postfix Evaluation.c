#include<stdio.h>
#include<string.h>
int top=-1;
int stk[20];
void push(int c){
    stk[++top]=c;
}
int pop(){
    return stk[top--];
}
void main(){
    char expr[20];
    printf("enter the expression : ");
    gets(expr);
    int i,a,b,res;
    for(i=0;i<strlen(expr);i++){
        if(isdigit(expr[i])){
            int cnvrt=expr[i];
            cnvrt=cnvrt-48;
            push(cnvrt);
        }
        else{
            a=pop();
            b=pop();
            if(expr[i]=='*'){
                res=b*a;
            }
            if(expr[i]=='/'){
                res=b/a;
            }
            if(expr[i]=='+'){
                res=b+a;
            }
            if(expr[i]=='-'){
                res=b-a;
            }
            push(res);
        }
    }
    int temp;
    temp=pop();
    printf("%d",temp);
}
