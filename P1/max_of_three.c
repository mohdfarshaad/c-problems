#include <stdio.h>

int maxOfThree(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Maximum is %d\n", maxOfThree(num1, num2, num3));
    return 0;
}