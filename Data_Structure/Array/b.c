#include <stdio.h>

int main()
{
    int arr[10];
    int i, j, temp;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] % 10 > arr[j + 1] % 10)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}