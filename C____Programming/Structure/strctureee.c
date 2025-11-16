#include<stdio.h>
struct book{
     char title[10];
     double price;
     int page;
};

int main(){
    struct book b1={"learn C",670.6,325};
    struct book *strptr;
    strptr = &b1;

    printf("Title :%s\n",strptr ->title);
    printf("prince : %lf\n",strptr ->price);
    printf("No of Pages : %d\n",strptr->page);

    return 0;
}