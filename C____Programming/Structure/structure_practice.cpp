#include<stdio.h>
struct personnnn
{ // global
    int age;
    float salary;
};
int main(){

    struct personnnn person[4];

    int i;

    for(i=0;i<4;i++){
    printf("Enter Information for Person %d : \n",i+1);
    printf("Enter Age :");
    scanf("%d",&person[i].age);

    printf("Enter salary :");
    scanf("%f", &person[i].salary);
    }

    for (i = 0; i < 4; i++)
    {
        printf("\n\nInformation for Person %d : \n", i+1);
        printf("Age : %d\n",person[i].age);
       
        printf("salary :%.2f\n",person[i].salary);
       
    }

    return 0;

    
}