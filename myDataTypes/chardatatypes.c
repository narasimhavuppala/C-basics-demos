/*
 * chardatatypes.c
 *
 *  Created on: Apr 1, 2018
 *      Author: Shreemaan
 */

#include <stdio.h>
#include <limits.h>

int main() {

// Character

	/*char course = 'C Programming';

	 printf("value =%c \n" ,course);

	 printf("Size of Char= %d \n", sizeof(char));
	 printf("Size of Char= %d \n", sizeof(unsigned char));

	 printf("CHAR MIN RANGE= %d \n", CHAR_MIN);
	 printf("CHAR MAX RANGE= %d \n", CHAR_MAX);

	 */

//INT
	printf("Size of Char= %d \n", sizeof(int));

	printf("Size of Char= %d \n", INT_MIN);
	printf("Size of Char= %d \n", INT_MAX);

	//Long

	printf("Size of Char= %d \n", sizeof(long));

	printf("Size of Char= %d \n", LONG_MIN);
	printf("Size of Char= %d \n", LONG_MAX);

	//Float//Doble

	float f=12.5;
	double d=12.1234567890123456789;
	printf("Size of float= %d \n", sizeof(float));
	printf("d=%e",d);

	return 0;
}
