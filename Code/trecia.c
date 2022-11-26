#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b, c;
    int nextNum;
    bool flag = 1;

    while (flag)
    {
        printf("\nGive a non negative value: ");
        scanf("%i", &a);
        printf("Give another non negative value : ");
        scanf("%i", &b);
        printf("Give the third non-negative value to whome to print the cycle to: ");
        scanf("%i", &c);
        if (a >= 0 && b >= 0 && c >= 0)
        {
            flag = 0;
        }
        else
        {
            printf("\nEnter the numbers correctly!\n");
        }
    }

    printf("%d, %d, ", a, b);

    nextNum = a + b;

    for (int i = 3; i <= c; ++i)
    {
        printf("%d, ", nextNum);
        a = b;
        b = nextNum;
        nextNum = a + b;
    }

    return 0;
}