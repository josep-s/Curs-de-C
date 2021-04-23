#include <stdio.h>

/* programa que compta els espais en blanc, els tabuladors i les línies */
main()
{
	int caracter, espais, tabs, linies;

	espais = 0;
	tabs = 0;
	linies = 0;
	while ((caracter = getchar()) != EOF) {
		if (caracter == ' ')
			++espais;
		else if (caracter == '\t')
				++tabs;
		else if (caracter == '\n')
				++linies;
	}
	printf("%d espais en blanc\n%d tabuladors\n%d línies\n", espais, tabs, linies);
}