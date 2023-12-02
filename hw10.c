#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

struct city
{
    char name[20];
    char country[20];
    int population;
};

int main(void)
{
    printf("Input three cities: \n");
    struct city arr[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Name> ");
        scanf(" %[^\n]", arr[i].name, sizeof(arr[i].name));

        printf("Country> ");
        scanf(" %[^\n]", arr[i].country, sizeof(arr[i].country));

        printf("Population> ");
        scanf("%d", &arr[i].population);
    }

    printf("Printing the three cities: \n");
    for (i = 0; i < 3; i++)
    {
        printf("%d. %s in %s with a population of %d people \n",i+1, arr[i].name, arr[i].country, arr[i].population);
    }

    return 0;
}
