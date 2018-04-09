/*
 * variablesScope.c
 *
 *  Created on: Apr 3, 2018
 *      Author: Shreemaan
 */
#include <stdio.h>

float PI = 3.17;

int main() {
	int n = 15;
	sum(n);
	sum(n);
	sum(n);


	//printf("PI in main function=%f \n",PI);

	return 0;
}

int sum(int x) {
	// int counter = 0;
	static  int counter = 0;
	counter =counter + 1;
	printf("%d \n",counter);


	//printf("PI in sum function %f \n",PI);

	//int n = 20;
	return counter;
}

