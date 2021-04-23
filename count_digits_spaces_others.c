#include <stdio.h>

/* compta dígits, espais en blanc i altres que no siguen aquests */
main()
{
	int caracter, i, espais, altres;
	int digits[10];
	
	espais = altres = 0;
	
	for (i = 0; i < 10; ++i)
		digits[i] = 0;
		
	while ((caracter = getchar()) != EOF) {
		if (caracter >= '0' && caracter <= '9')
			++digits[caracter - '0'];
		else if (caracter == ' ' || caracter == '\n' || caracter == '\t')
			++espais;
		else
			++altres;
	}
	
	printf("Dígits\n");
	for (i = 0; i < 10; ++i)
		printf(" dígit %d - %d\n", i, digits[i]);
	printf("%d espais en blanc\n%d altres caracters\n", espais, altres); 
}
