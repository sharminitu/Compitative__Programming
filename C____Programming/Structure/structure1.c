#include<stdio.h>
struct person{
    int age;
    float salary;

};
int main()
{
    struct person person1={27,2344.67};
    struct person person2,person3;

//element wise assingment;
    person2.age =25;
    person2.salary =235450.50;

// structure variable assingment

    person3=person2;
    
    // printf("person1: \n");
    // printf("Age = %d\n", person1.age);
    // printf("salary =%.2f\n", person1.salary);

    // printf("\nperson2: \n");
    // printf("Age = %d\n", person2.age);
    // printf("salary =%.2f\n", person2.salary);

    // printf("\nperson3: \n");
    // printf("Age = %d\n", person3.age);
    // printf("salary =%.2f\n", person3.salary);

    if(person1.age==person2.age && person1.salary==person2.salary)
    {
        printf("person1 equal person2");
    }
    else{
        printf("person1 Not equal person2");
    }

    return 0;

}