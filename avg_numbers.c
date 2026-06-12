// Calculation of Average Numbers
#include <stdio.h>

#define N 10

int main()
{
    int count ;
    float sum, average, number;
    sum = 0;
    count = 0;
    while (count<N)
    {
        printf("Enter number %d:", count + 1);
        scanf("%f", &number);
        sum = sum + number;
        count = count + 1;
    
    }
    average = sum/N;
    printf("N = %d Sum = %f", N, sum);
    printf("Average = %f", average);
    return 0;
}