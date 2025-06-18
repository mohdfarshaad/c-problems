// Develop a program to generate a Fibonacci sequence up to n terms

#include <stdio.h>

int main()
{
    int n, temp, first = 0, second = 1, fib = 0;

    printf("Enter N :");
    scanf("%d", &n);

    if (n == 1)
    {
        return first;
    }

    if (n == 2)
    {
        return second;
    }

    printf("Fibonnacci Series up to %d \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", first);
        fib = first + second;
        first = second;
        second = fib;
    }
}