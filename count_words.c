#include <stdio.h>

#define IN 	1	/* dins d'una paraula */
#define OUT	0	/* fora d'una paraula */

/* compta les línies, paraules i caracters d'un fitxer */
main()
{
	int caracter, linies, paraules, caracters, estat;

	estat = OUT;
	linies = paraules = caracters = 0;
	while ((caracter = getchar()) != EOF) {
		++caracters;
		if (caracter == '\n')
			++linies;
		if (caracter == ' ' || caracter == '\n' || caracter == '\t')
			estat = OUT;
		else if (estat == OUT) {
			estat = IN;
			++paraules;
		}
	}
	printf("%d caracters\n%d paraules\n%d línies\n", caracters, paraules, linies );
}
