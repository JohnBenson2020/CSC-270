#include <stdio.h>

float temperature, fahrenheit, celsius, kelvin;
char scale;

float FTC(float temperature)
{
    celsius = (temperature - 32) / 1.8;
    return celsius;
}

float FTK(float temperature)
{
    kelvin = FTC(temperature) + 273.15;
    return kelvin;
}

float CTF(float temperature)
{
    fahrenheit = temperature * 1.8 + 32;
    return fahrenheit;
}

float CTK(float temperature)
{
    kelvin = temperature + 273.15;
    return kelvin;
}

float KTF(float temperature)
{
    fahrenheit = (temperature - 273.15) * 1.8 + 32;
    return fahrenheit;
}

float KTC(float temperature)
{
    celsius = temperature - 273.15;
    return celsius;
}

int main(void)
{
    printf("Enter input temperature: ");
    scanf("%f %c", &temperature, &scale);

    if(scale == 'F')
    {
        celsius = FTC(temperature);
        kelvin = FTK(temperature);

        printf("%0.2f Fahrenheit converts to:\n"
               "\t%0.2f C\n"
               "\t%0.2f K\n", temperature, celsius, kelvin);

        return 0;
    }
    else if(scale == 'c')
    {
        fahrenheit = CTF(temperature);
        kelvin = CTK(temperature);

        printf("%0.2f Celsius converts to:\n"
               "\t%0.2f F\n"
               "\t%0.2f K\n", temperature, fahrenheit, kelvin);

        return 0;
    }
    else if(scale == 'k')
    {
        fahrenheit = KTF(temperature);
        celsius = KTC(temperature);

        printf("%0.2f Kelvin converts to:\n"
               "\t%0.2f C\n"
               "\t%0.2f F\n", temperature, celsius, fahrenheit);

        return 0;
    }
    else
    {
        printf("Invalid temperature scale\n");
        return 1;
    }
}