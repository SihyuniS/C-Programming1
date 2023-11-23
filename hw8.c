#include <stdio.h>
#include <math.h>

double SD(double arr[], int size);

int main() 
{
    double num[5];

    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i) 
    {
        scanf_s("%lf", &num[i]);
    }

    printf("Standard Deviation = %lf\n", SD(num, 5));

    return 0;
}

double SD(double arr[], int size) 
{
    double sum = 0;
    double mean, sdeviation = 0;

    for (int i = 0; i < size; ++i) 
    {
        sum += arr[i];
    }
    mean = sum / size;

    for (int i = 0; i < size; ++i) 
    {
        sdeviation += pow(arr[i] - mean, 2);
    }
    sdeviation = sqrt(sdeviation / size);

    return sdeviation;
}
