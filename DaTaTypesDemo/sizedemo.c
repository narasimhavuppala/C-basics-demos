/*
 * sizedemo.c
 *
 *  Created on: Apr 1, 2018
 *      Author: Shreemaan
 */

#include <stdio.h>
#include <limits.h>

int main() {

	//char

	printf("size of char in bytes =%d \n", sizeof(char));

	//Numeric

	printf("size of int in bytes =%d \n", sizeof(int));

	printf("size of long in bytes =%d \n", sizeof(long));

	//Decimal Data types

	printf("size of float in bytes =%d \n", sizeof(float));

	printf("size of dobule in bytes =%d \n", sizeof(double));

	char name = 'a';
	char name1 = 'z';
	//%c will extract character value
	printf("name = %c \n", name);

	//%d will extract ASCII Values
	//ASCII Values :  http://sticksandstones.kstrom.com/appen.html
	printf("name = %d \n", name1);

	int age = 50;

	printf("age =%d \n", age);

	float fage = 50;

	printf("fage =%f \n", fage);

	double dage = 50;

	printf("dage =%e \n", dage);

	printf("Char Max Value=%d \n", CHAR_MAX);
	printf("Char Min Value=%d \n", CHAR_MIN);

	printf("Int Max Value=%d \n", INT_MAX);
	printf("Int Min Value=%d \n", INT_MIN);

	//Formatters
	return 0;
}
