#include <stdio.h>
int main()
{
    int number;

    printf("Enter an year:");
    scanf("%d", &number);

    // True if the number is perfectly divisible by 2
    if(number % 4 == 0)
        printf("%d is  a leap year", number);
    else
        printf("%d is not a leap year", number);

    return 0;
}
