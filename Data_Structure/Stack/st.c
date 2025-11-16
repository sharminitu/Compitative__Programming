#include<stdio.h>
#define SIZE 10
int stack[SIZE];
int top =-1;
void push(int a){
    if(a>=SIZE-1){
        printf("Overfllow\n");

    }
    else{
        top++;
        stack[top]=a;
        printf("pushes value : %d\n",stack[top]);

    }


}
void display(){
    if(top==1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack element :");
        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
        }
        printf("\n");
        
    }
}

void pop(){
    if(top==-1){
        printf("Underflow");

    }
    else{
        int popped = stack[top];
        printf("poped value : %d",stack[top]);
        top--;
    }
    
}
int main(){
    int n;
    scanf("%d",&n);

    int a;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        push(a);
    }

    dispaly();
    pop();
    pop();

    peek();

    dispaly();
    


    
}