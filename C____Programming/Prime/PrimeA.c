// #include <stdio.h>

// int main()
// {
//     int i, j, isPrime;

//     printf("Prime numbers between 1 and 100 are:\n");

//     for (i = 2; i <= 100; i++)
//     {
//         isPrime = 1;
//         for (j = 2; j <= i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 isPrime = 0; 
//                 break;
//             }
//         }

//         if (isPrime)
//         {
//             printf("%d ", i);
//         }
//     }

//     printf("\n");
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int number;
//     int sum = 0;

//     printf("Enter numbers to add (enter 0 to stop):\n");

//     do
//     {
//         scanf("%d", &number);
//         sum += number;
//     } while (number != 0);

//     printf("The total sum is: %d\n", sum);

//     return 0;
// }
#include <stdio.h>
#include <string.h>

// int main()
// {
//     char str1[100], str2[50];
//     char str3[100], str4[50];
//     int i, j;

//     printf("Enter first string: ");
//     gets(str1);
//     printf("Enter second string: ");
//     gets(str2);

//     strcpy(str3, str1); 
//     strcat(str3, str2); 
//     printf("\nUsing strcat(): %s\n", str3);

//     for (i = 0; str1[i] != '\0'; i++)
//     {
//         str4[i] = str1[i];
//     }

//     for (j = 0; str2[j] != '\0'; j++)
//     {
//         str4[i + j] = str2[j];
//     }

//     str4[i + j] = '\0'; 

//     printf("Without using strcat(): %s\n", str4);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[100], str2[100];
//     int i, isEqual = 1;

//     printf("Enter first string: ");
//     gets(str1);
//     printf("Enter second string: ");
//     gets(str2);

//     if (strcmp(str1, str2) == 0)
//     {
//         printf("\nUsing strcmp(): Strings are equal.\n");
//     }
//     else
//     {
//         printf("\nUsing strcmp(): Strings are not equal.\n");
//     }

//     for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
//     {
//         if (str1[i] != str2[i])
//         {
//             isEqual = 0;
//             break;
//         }
//     }

//     if (isEqual)
//     {
//         printf("Without using strcmp(): Strings are equal.\n");
//     }
//     else
//     {
//         printf("Without using strcmp(): Strings are not equal.\n");
//     }

//     return 0;
// }
#include <stdio.h>

float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}

int main()
{
    float x, y, z, result;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    result = average(x, y, z);

    printf("The average is: %.2f\n", result);

    return 0;
}
