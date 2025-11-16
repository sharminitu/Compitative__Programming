// #include<stdio.h>
// int main()
// {
//     typedef char letter;

//     letter ch;
//     ch ='A';

//     printf("ch= %c\n",ch);

//     letter ch1;
//     ch1='a';
//     printf("ch1= %c\n", ch1);

//     getch();
// }

#include<stdio.h>
struct book
{
    char name[20];
    int price;
};
int main()
{
    typedef struct book Book;

    Book b= {"Amar jibon kotha",350};

    printf("Book name = %s\n",b.name);
    printf("Book name = %d\n", b.price);
}