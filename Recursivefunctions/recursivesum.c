/*
 * recursivesum.c
 *
 *  Created on: Apr 3, 2018
 *      Author: Shreemaan
 */

#include <stdio.h>

int main() {
	int n = 20;
	int added = sum(n);
	printf("%d \n", added);

}

int sum(int n) {
	//Must Have exit condition //Otherwise it will be infinite loop
	if (n == 1) {
		return 1;
	}
	return n + sum(n - 1);

}

//sum=n * (n+1)/2
//sum (n) =n + sum(n-1);
//sum(10)=10 + sum(9);
//sum=10 + 9 + sum(8);
//sum=10 + 9 + 8 + sum(7).



//sum(10) =10 _ 9 + 8 + 7+ 6 + 5 + 4 + 3 + 2 + 1
