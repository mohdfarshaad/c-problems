#include <stdio.h>

void reverseNumber(int n)
{
    if (n < 10)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d", n % 10);
        reverseNumber(n / 10);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number: ");
    reverseNumber(num);
    printf("\n");
    return 0;
}