#include <stdio.h>
/* Imprimeix una taula d'equivalència entre Fahrenheit i Cecius
   La taula va de 20 en 20 des de 0 fins a 300 */

#define LOWER	0
#define UPPER	300
#define STEP	20

main()
{
	int fahr;

	printf("Fahr\tCelcius\n----\t-------\n");
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%4d\t%5.1f\n", fahr, 5 * (fahr - 32) / 9.0);
}