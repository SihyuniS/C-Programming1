#include <stdio.h>

int main(void) 
{
    int arr[5];
    int odd[5], even[5];
    int oddIndex = 0, evenIndex = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) 
    {
        scanf_s("%d", &arr[i]);
        if (arr[i] % 2 == 0) 
        {
            even[evenIndex] = arr[i];
            evenIndex++;
        }
        else {
            odd[oddIndex] = arr[i];
            oddIndex++;
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddIndex; i++) 
    {
        printf("%d ", odd[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < evenIndex; i++) 
    {
        printf("%d ", even[i]);
    }

    return 0;
}