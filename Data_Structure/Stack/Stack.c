#include<stdio.h>
void Display();
void insertion();
void Deletion();
void peek();
#define SIZE 5

struct stack
{
    int arr[SIZE];
    int top;
};
struct stack s;
int main()
{
    s.top =0;

    insertion();
    insertion();
    insertion();
    insertion();
    Display();
    Deletion();
    Display();

}
void insertion()
{
    if (s.top == SIZE - 1)
    {
        printf("Over Flow\n");
        return;
    }
    else{
        printf("Insert Element :");
        int p;
        scanf("%d",&p);
         s.arr[s.top]=p;
         s.top = s.top+1;
    }
}
void peek()
{
    if (s.top == -1)
    {
        printf("Under Flow\n");
    }
    else
    {
        printf("top = %d\n", s.top);
    }
}
void Deletion(){
    if(s.top==-1){
        printf("Under Flow\n");
        return;
    }
    else{
        s.top = s.top-1;
    }
}
void Display(){
    for(int i=0;i<s.top;i++){
        printf("%d ",s.arr[i]);
    }
    printf("\n");
}

/*
#include <stdio.h>
#define SIZE 10
struct stack {
    int arr[SIZE];
    int top;
};

struct stack s; // global stack variable

void insertion();
void Deletion();
void Display();

int main() {
    s.top = 0; // initialize top

    insertion();
    insertion();
    Display();
    Deletion();
    Display();

    return 0;
}

void insertion() {
    if (s.top == SIZE) {
        printf("Stack Overflow\n");
        return;
    }

    int p;
    printf("Insert Element: ");
    scanf("%d", &p);
    s.arr[s.top] = p;
    s.top++;
}

void Deletion() {
    if (s.top == 0) {
        printf("Stack Underflow\n");
        return;
    }

    s.top--;
    printf("Top element deleted\n");
}

void Display() {
    if (s.top == 0) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i < s.top; i++) {
        printf("%d ", s.arr[i]);
    }
    printf("\n");
}
*/