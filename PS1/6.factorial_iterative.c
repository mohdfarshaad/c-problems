// Write a function to calculate the factorial of a number using an iterative method.

#include <stdio.h>

long factorial(int n)
{
    long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %ld\n", num, factorial(num));
    return 0;
}