#include <stdio.h>
#include <math.h>

int input_validation(char);

int main()
{
    int a, b, c;
    double x1, x2;
    int D;
    
    a = input_validation('a');
    b = input_validation('b');
    c = input_validation('c');

    D = pow(b, 2) - 4 * a * c;

    if (D < 0)
    {
        printf("No answers! D < 0\n");
    }
    else if (D == 0)
    {
        x1 = x2 = -b / 2 * a;
        printf("x1 = %0.2lf\nx2 = %0.2lf", x1, x2);
    }
    else
    {
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;
        printf("x1 = %0.2lf\nx2 = %0.2lf", x1, x2);
    }

    return 0;
}

int input_validation(char letter)
{
    int num;
    printf("Give coefficient %c: ", letter);

    while (scanf("%d", &num) == 0 || getchar() != '\n')
    {
        printf("It is not an Integer\nTry again\n");
        while(getchar() != '\n');
    }
    return num;
}