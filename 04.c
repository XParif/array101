#include <stdio.h>

int main()
{

    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    int firstArray[n], secondArray[n];

    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &firstArray[i]);
    }

    for (int i = 0; i < n; i++)
    {
        secondArray[i] = firstArray[i];
    }

    printf("The elements stored in the first array are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", firstArray[i]);
    }

    printf("\nThe elements copied into the second array are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", secondArray[i]);
    }

    return 0;
}