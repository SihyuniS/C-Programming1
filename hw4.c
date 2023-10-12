#include <stdio.h>

int main(void)
{
    int num, i, prime = 0;

    printf("Please enter a number: ");
    scanf_s("%d", &num);

    for (i = 1; i <= num; i = i + 1)
    {
        if ((num % i) == 0)
        {
            prime = prime + 1;
        }
    }

    if (prime == 2)
    {
        printf("It is a prime number.\n");
    }
    else
    {
        printf("It is not a prime number.\n");
    }

    return 0;
}