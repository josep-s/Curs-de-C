#include <stdio.h>
#include <limits.h>
#include <float.h>

main()
{
	printf("Bits del tipus de dades char: %d\n\n", CHAR_BIT);
	
	printf("Màxim valor del tipus de dades signed char: %d\n", SCHAR_MAX);
	printf("Mínim valor del tipus de dades signed char: %d\n\n", SCHAR_MIN);
	
	printf("Màxim valor del tipus de dades unsigned char: %d\n\n", UCHAR_MAX);
	
	printf("Màxim valor del tipus de dades short: %d\n", SHRT_MAX);
	printf("Mínim valor del tipus de dades short: %d\n\n", SHRT_MIN);
	
	printf("Màxim valor del tipus de dades int: %d\n", INT_MAX);
	printf("Mínim valor del tipus de dades int: %d\n\n", INT_MIN);
	
	printf("Màxim valor del tipus de dades unsigned int: %d\n\n", UINT_MAX);
	
	printf("Màxim valor del tipus de dades long: %ld\n", LONG_MAX);
	printf("Mínim valor del tipus de dades long: %ld\n\n", LONG_MIN);
	
	printf("Màxim valor del tipus de dades unsigned long: %lu\n\n", ULONG_MAX);
	
	printf("Màxim valor del tipus de dades float: %.10e\n", FLT_MAX);
	
	printf("Mínim valor del tipus de dades float: %.10e\n", FLT_MIN);
}
