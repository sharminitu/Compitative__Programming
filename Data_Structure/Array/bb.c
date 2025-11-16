#include <stdio.h>

int main()
{
    int arr[10];
    int i, j, tmp;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);

    }


    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] % 10>arr[j + 1] % 10)
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }

            else if (arr[j] % 10 == arr[j + 1] % 10 && arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
  
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}