//structure = collection of different data type

#include<stdio.h>
//global structure==main functioner bahire;

struct person
{
    int age;
    float salary;

};

// struct person person1, person2; // GLOVAL VARIABLE

int main()
{

    // // local structure = main funtioner vitore
    // struct person
    // {
    //     int age;
    //     float salary;
    // };

    struct person person1,person2;//locAL VARIABLE
    printf("Enter enformation for person1 : \n");
    printf("Enter Age : ");
    scanf("%d",&person1.age);
    printf("Enter salary :");
    scanf("%f",&person1.salary);

    printf("person1: \n");
    printf("Age = %d\n",person1.age);
    printf("salary =%.2f\n",person1.salary);

    printf("Enter enformation for person2 : \n");
    printf("Enter Age : ");
    scanf("%d", &person2.age);

    
    printf("Enter salary :");
    scanf("%f", &person2.salary);

    printf("person2: \n");
    printf("Age = %d\n", person2.age);
    printf("salary =%.2f\n", person2.salary);

    return 0;
}