// structure = collection of different data type

#include <stdio.h>
// global structure==main functioner bahire;

struct person
{
    char name[50];
    int age;
    float salary;
};

// struct person person1, person2; // GLOVAL VARIABLE

int main()
{

    struct person person[4];
    int i;

    for(i=0;i<4;i++)
    {
        printf("Enter information person %d\n",i+1);
        printf("Enter name:\n");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter age :\n");
        scanf("%d",&person[i].age);
        printf("Enter salary :\n");
        scanf("%f", &person[i].salary);
    }
    for (i = 0; i < 4; i++)
    {

        printf(" \n\ninformation person %d\n", i + 1);
        printf("Name : %s\n",person[i].name);
        printf("Age  =%d\n", person[i].age);
        printf("salary =%f\n", person[i].salary);
    }

    return 0;
}