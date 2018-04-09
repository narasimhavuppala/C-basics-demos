/*
 * OperatorsDemo.c
 *
 *  Created on: Apr 1, 2018
 *      Author: Shreemaan
 */

#include <stdio.h>

int main() {

	int a = 8;
	int b = 7;

	//Arithamatic Operatos ///////////////////////////////////////////

	printf("Sum of a  + b =%d  \n", (a * b));


	printf("Division of a and b= %d \n", (a / b));

	printf("Modulus  of a  and  b =%d  \n", (a % b));  // Reminder

	// a +b  , a-b;   a * b , a/b; a%b

	//Relational Operators ******************************
	if (a > b) {

		printf("A is greater than B");
	}
	// > < >= <= == !=

	///Logical Operators(Compare relational Operators)
	if (a >= b && a > 5) {
		printf("Hello Logical  AND Operators \n");
	}

	if (a >= b || a > 15) {
		printf("Hello Logical OR  Operators \n");
	}

	if (!(a < b)) {

		printf("Not Equals \n");
	}

	//Assignment Opertors

	int c=a;
	//printf("value of c=%d",( a | b));


	//Ternary Opertors
	int max = a > b ? a : b;

	printf("Max of a and b=%d", max);

	return 0;
}
