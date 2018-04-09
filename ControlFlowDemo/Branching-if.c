/*
 * Branching-if.c
 *
 *  Created on: Apr 1, 2018
 *      Author: Shreemaan
 */

#include <stdio.h>

int main() {

	int age;

	scanf("%d", &age);

	if (age <= 18) {

		printf("Minor \n");
	} else if (age > 18 && age <= 58) {
		printf("Major \n");

	} else {
		printf("Senior citizen");
	}

	char grade = 'A';

	switch (grade) {

	case 'A':
		printf("Excellent \n");
		break;
	case 'B':

		printf("Avergae \n");
		break;

	case 'C':
		printf("Below Avergae \n");
		break;

	default:

		printf("failed");
		break;

	}

	for (int i = 0; i < 20; i = i + 1) {
		if (i % 2 != 0) {
			continue;
		}

		if (i == 12) {
			break;
		}

		printf("%d \n", i);

	}

	int i = 0;

	while (i < 20) {

		printf("%d \n", i);
		if (i == 14) {
			break;
		}

		i = i + 1;
	}

	do {
		printf("Hello");

	} while (i > 19);
	return 0;
}
