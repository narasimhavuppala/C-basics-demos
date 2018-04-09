/*
 * operators.c

 *
 *  Created on: Apr 1, 2018
 *      Author: Shreemaan
 */
#include <stdio.h>

int main(){

	int a =8,b=7;

	printf("SUM is =%d \n" , (a % b));


	//Relation

	if(8 > 7){  //> < >= <=
		printf("Hello");
	}

	int c=a | b;

	printf("va;ue of c =%d" ,c);

	int op= 6 > 5 ? 8 :9;

	printf("Testing =%d",op);

	return 0;
}


