#include<stdio.h>
#define SIZE 100
int stack[SIZE];
int top =-1;
void push(int a){
    if(top>=SIZE-1){
        printf("OverFlow\n");
    }
    else{
        top++;
        stack[top]=a;

        printf("Pushed Value : %d\n",stack[top]);
    }
}
void pop(){
    if(top==-1){
        printf("UnderFlow\n");
    }
    else{
        int popooed = stack[top];
        printf("Value poped : %d\n",popooed);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("top = %d",stack[top]);
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack Element :");
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        push(a);
    }

    display();
    pop();
    pop();

    display();
    peek();
}

