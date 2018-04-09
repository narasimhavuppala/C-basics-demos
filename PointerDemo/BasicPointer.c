/*
 * BasicPointer.c
 *
 *  Created on: Apr 3, 2018
 *      Author: Shreemaan
 */
#include <stdio.h>

int main() {

	int i = 5;

	int *p = &i;

	/*int arr[5] = { 1, 2, 3, 4, 5 };
	 int *p = &arr;*/

	printf("%p\n", &p);  //Memory Addres
	printf("%p \n", p);  //Pointer address
	printf("%d \n", *p); //Memory Value

	*p = 7;

	printf("%d \n", i);

	i = 9;

	printf("%p\n", &p);
	printf("%p \n", p);
	printf("%d \n", *p);

	return 0;
}

