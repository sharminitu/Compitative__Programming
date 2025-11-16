#include<stdio.h>
#define SIZE 10
int front = -1;
int rear = -1;
int queue[SIZE];
void enqueue(int n){

   
    if(rear==SIZE -1){
       printf("Over Flow \n");
        }
        else if(front =-1 && rear ==-1){
            front =0,rear =0;
            queue[rear]=n;

        }
    
        else{
        rear++;
        queue[rear]=n;

    }

}

void dequeue(){
    if(front==-1 ||front >rear){
        printf("Underflow");
        return;
    }
    
    else{
        printf(" deleted from queue : %d ",queue[front]);
        front++;
    }
    printf("\n");
}
void display(){
    int i;

    if(front ==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is :");

        for(i=front ;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
    
}

int main(){
    int n;
    scanf("%d", &n);

    int a;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        enqueue(a);
    }

    dequeue();
    dequeue();

    display();


}