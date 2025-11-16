#include <stdio.h>
struct personnnn
{ // global
    char name[50];
    int age;
    float salary;
};
int main()
{

    struct personnnn person[4];

    int i;

    for (i = 0; i < 4; i++)
    {
        printf("\nEnter Information for Person %d : \n", i + 1);
        printf("Name :");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter Age :");
        scanf("%d", &person[i].age);

        printf("Enter salary :");
        scanf("%f", &person[i].salary);
    }

    for (i = 0; i < 4; i++)
    {
        printf("\n\nInformation for Person %d : \n", i + 1);
        printf("Name : %s\n",person[i].name);
        printf("Age : %d\n", person[i].age);

        printf("salary :%.2f\n", person[i].salary);
    }

    return 0;
}