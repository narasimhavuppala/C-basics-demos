/*
 * demo.c
 *
 *  Created on: Apr 3, 2018
 *      Author: Shreemaan
 */

#include <stdio.h>

int main() {
	int i = 6;

	int j=8;
	increment(&i,&j);

	printf("%d %d\n", i ,j);
	increment(&i,&j);
	printf("%d %d\n", i ,j);
	return 0;
}

void increment(int *x,int *y) {

	*x = *x + 1;
	*y=*y +2;
}
