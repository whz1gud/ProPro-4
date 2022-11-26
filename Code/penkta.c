#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;

    printf("How many numbers to write: ");
    scanf("%d", &n);

    double numbers[n], max, min;
    double sum = 0, avg = 0;
    int i = 0;

    for (i = 0; i < n; ++i)
    {
        do
        {
            printf("Enter a number %d: ", i + 1);
        } while (1 != scanf("%lf", &numbers[i]));

        sum += numbers[i];
    }
    avg = sum / i;
    max = numbers[0];
    min = numbers[0];

    for (int i = 1; i < n; ++i)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    printf("Sum: %0.2lf\nAverage: %0.2lf\nMinVal: %0.2lf\nMaxVal: %0.2lf", sum, avg, min, max);
    return 0;
}