#include<stdio.h>
#include<string.h>

struct person
{
    char name[20];
    int age;
    float salary;

};
void display(struct person p)
{
    printf("Name : %s\n",p.name);
    printf("age : %d\n", p.age);
    printf("salary : %f\n", p.salary);
}
int main()
{
    struct person person1;

    strcpy(person1.name,"Sharmin Sultana");

    person1.age = 27;
    person1.salary =121250.50;

    display(person1);

}