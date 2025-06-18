// Implement a function to convert temperature from Celsius to Fahrenhit.

#include <stdio.h>

float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("%.2f°C = %.2f°F\n", celsius, celsiusToFahrenheit(celsius));
    return 0;
}