#include <stdio.h>
/* Imprimeix una taula d'equivalència entre Fahrenheit i Cecius
   La taula va de 20 en 20 des de 0 fins a 300 */

main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Fahr\tCelcius\n----\t-------\n");
	while (fahr <= upper) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%4.0f\t%5.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}