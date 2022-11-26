#include <stdio.h>
#include <math.h>

int findDBD(int, int, int);
void printDauginamaisiais(int, int, int *);
int findDBDof2(int, int);
int findMBKof2(int, int, int);

int main()
{
    int a, b, c, oA, oB, oC, mbk, aDaug[30], bDaug[30], cDaug[30];
    int newIndexA, newIndexB, newIndexC;
    int dbdOf2, mbkOfAandB, dbdOf3;

    printf("Ivesk pirma skaiciu: ");
    scanf("%d", &a);
    printf("Ivesk antra skaiciu: ");
    scanf("%d", &b);
    printf("Ivesk trecia skaiciu: ");
    scanf("%d", &c);

    oA = a;
    oB = b;
    oC = c;
    mbkOfAandB = findMBKof2(a, b, findDBDof2(a, b));
    dbdOf3 = findDBDof2(mbkOfAandB, c);
    mbk = findMBKof2(mbkOfAandB, c, dbdOf3);

    // //Suskirstau skaicius dauginamaisiais ir irasau i masyvus (padariau papildomai)

    newIndexA = newIndexB = newIndexC = 0;
    for (int i = 2; a > 1; i++)
    {
        if (a % i == 0)
        {
            a = a / i;
            aDaug[newIndexA] = i;
            newIndexA++;
            i--;
        }
    }
    for (int i = 2; b > 1; i++)
    {
        if (b % i == 0)
        {
            b = b / i;
            bDaug[newIndexB] = i;
            newIndexB++;
            i--;
        }
    }
    for (int i = 2; c > 1; i++)
    {
        if (c % i == 0)
        {
            c = c / i;
            cDaug[newIndexC] = i;
            newIndexC++;
            i--;
        }
    }
    printf("DBD: %d\n", findDBD(oA, oB, oC));
    printf("MBK: %d\n", mbk);
    printDauginamaisiais(oA, newIndexA, aDaug);
    printDauginamaisiais(oB, newIndexB, bDaug);
    printDauginamaisiais(oC, newIndexC, cDaug);

    return 0;
}

int findDBD(int a, int b, int c)
{
    int max, dbd = 1;

    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else if (c > a && c > b)
    {
        max = c;
    }
    else
    {
        max = a;
    }

    for (int i = 1; i <= max; i++)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
        {
            dbd = i;
        }
    }

    return dbd;
}

void printDauginamaisiais(int skaicius, int index, int newArray[])
{
    printf("%d = ", skaicius);
    for (int i = 0; i < index; i++)
    {
        printf("%d", newArray[i]);
        if (i+1 < index)
        {
            printf("*");
        }
    }
    printf(";\n");
}

int findDBDof2(int a, int b)
{
    int dbd;
    while (abs(a) && abs(b))
        if (abs(a) > abs(b))
            a %= b;
        else
            b %= a;
    return dbd = a + b;
}

int findMBKof2(int num1, int num2, int dbd)
{
    int mbk;
    return mbk = (num1 * num2) / dbd;
}