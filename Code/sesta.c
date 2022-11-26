#include <stdio.h>

int main()
{
    double posNum = 0, mostDigitsNum, allNums[1000];
    int i = 0, maxDigits = 0, sum = 1, digitCount[1000], numsToInt[1000];

    printf("Type positive numbers\nTo end the cycle give a negative number:\n");

    do
    {
        scanf("%lf", &posNum);
        if (posNum >= 0)
        {
            for (i; i < sum; ++i)
            {
                allNums[i] = posNum;
                numsToInt[i] = (int)posNum;
            }
            sum = i + 1;
        }
    } while (posNum >= 0);

    for (int j = 0; j < i; j++)
    {
        
        do
        {
            numsToInt[j] /= 10;
            ++digitCount[j];
        } while (numsToInt[j] != 0);
        
        if (digitCount[j] > maxDigits)
        {
            maxDigits = digitCount[j];
            mostDigitsNum = allNums[j];
        }
    }
    

    // for (int j = 0; j < i; j++)
    // {
    //     printf("%0.2lf\n", allNums[j]);
    // }

    printf("\nNumber %0.2lf had the most digits (%d)\n", mostDigitsNum, maxDigits);

    return 0;
}