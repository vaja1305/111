#include <stdio.h>
int main()
{
    int number;

    printf("Enter an number:");
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is  a even number", number);
    else
        printf("%d is a odd number", number);

    return 0;
}
