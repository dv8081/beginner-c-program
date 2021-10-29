// Celsius to Kelvin converter

#include <stdio.h>

int main()
{
	float c, k;
	printf("Enter the desired temperature in Celcius:\n");
	scanf("%f", &c);
	k = c + 273.15;
	printf("Converted value: %f K\n", k);
	return 0;
}
