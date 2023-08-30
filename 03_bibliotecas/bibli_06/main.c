#include <stdio.h>
#include "Includes/temperature_conversor.h"
int main()
{
    float temperature;
    char mesure1,mesure2;
    scanf("%f %c %c",&temperature,&mesure1,&mesure2);
    if (mesure1 == 'c' && mesure2 == 'f')
    {
        temperature = convert_celsius_to_fahrenheit(temperature);
    }
    if (mesure1 == 'c' && mesure2 == 'k')
    {
        temperature = convert_celsius_to_kelvin(temperature);
    }
    if (mesure1 == 'f' && mesure2 == 'c')
    {
        temperature = convert_fahrenheit_to_celsius(temperature);
    }
    if (mesure1 == 'f' && mesure2 == 'k')
    {
        temperature = convert_fahrenheit_to_kelvin(temperature);
    }
    if (mesure1 == 'k' && mesure2 == 'c')
    {
        temperature = convert_kelvin_to_celsius(temperature);
    }
    if (mesure1 == 'k' && mesure2 == 'f')
    {
        temperature = convert_kelvin_to_fahrenheit(temperature);
    }
    printf("Temperature: %.2f%c",temperature,mesure2-32);
    if (mesure2 == 'c' || mesure2 == 'f')
    {
        printf("º");
    }
    
}