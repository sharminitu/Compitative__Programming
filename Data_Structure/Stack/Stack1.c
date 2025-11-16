#include<stdio.h>
#define SIZE 100
int stack[SIZE];
int top = -1;


void push(int value){
    if(top>=SIZE-1){
        printf("Stack OverFlow\n");
    }
    else{
        
        top++;
        stack[top] =value;

        printf("PUshed Value = %d \n",value);
    }
}
void pop(){
    if(top==-1){
        printf("Stack UnderFlow\n");
       
    }
    else{
        int poooped = stack[top];
        printf("%d popped element from the stack \n",stack[top]);
        top--;

    }
}
void peek(){
    if(top==-1){
        printf(" stack is empty.\n");
    }
    else{
        printf("%d Top element stack \n",stack[top]);
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty.\n");
    }
    else{
        printf("Stack element : ");

        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main(){
   
    push(10);
    push(20);
    push(30);
    push(50);
    push(60);
    display();
    pop();
    pop();
    peek();

    display();

    pop();
    pop();
    
    display();

}