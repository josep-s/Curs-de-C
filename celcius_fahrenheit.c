#include <stdio.h>
/* Imprimeix una taula d'equivalència entre Cecius i Fahrenheit
   La taula va de 20 en 20 des de 0 fins a 300 */

main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;

	printf("Celcius\tFahrenheit\n-------\t----------\n");
	while (celcius <= upper) {
		fahr = (celcius / 5 * 9) + 32;
		printf("%7.0f\t%5.1f\n", celcius, fahr);
		celcius = celcius + step;
	}
}