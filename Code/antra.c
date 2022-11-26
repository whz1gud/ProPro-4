#include <stdio.h>
#include <math.h>
  
int main()
{
    int a, b, c;
    int numbers[1000];

    printf("Ivesk pirma skaiciu: ");
    scanf("%d", &a);
    printf("Ivesk antra skaiciu: ");
    scanf("%d", &b);
    printf("Ivesk trecia skaiciu: ");
    scanf("%d", &c);

    for (int i = 0; a <= b; i++)
    {
        if (a % c == 1)
        {
            numbers[i] = a;
            printf("%d\n", numbers[i]);
        } 
        a++; 
    }

    
    return 0;
}