/*
 * functionsdemo.c
 *
 *  Created on: Apr 3, 2018
 *      Author: Shreemaan
 */

#include <stdio.h>

// Starting point of C Program
int main() {
	printf("1 \n");

	int n1=12;

	int n2=5;

	int calsum = sum(n1, n2);
	printf("calcsum=%d \n", calsum);
	printf("2 \n");
	sum(3, 7);
	printf("3 \n");

//	sayHello();

	return 0;
	//printf("4 \n");

} //Driven by this main
//Seperate Memory are Stack
int sum(int a, int b) {

	sayHello();

	printf(" values of a and b are % d % d \n" ,a,b);
	printf("done \n");
	return a + b;

}

void sayHello(){

	printf("Hello Functions \n");
	return;

}

