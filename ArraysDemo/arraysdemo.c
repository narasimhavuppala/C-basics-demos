/*
 * arraysdemo.c
 *
 *  Created on: Apr 2, 2018
 *      Author: Shreemaan
 */

#include <stdio.h>

int main() {
//With size

	//Declaration
	int colors[100];

	//printf("%d \n", length);

	//Initilization
	int marks[] = { 35, 44, 56, 78, 98, 75, 46 };

	//Length/size of any array
	int length = sizeof(marks) / sizeof(marks[0]);


	//Access using indexes
	printf("4th Student Marks=%d \n" ,marks[3]);

	printf("1st Student Marks=%d \n" ,marks[0]);
	printf("Class size=%d \n" ,length);

	//Iteration over Array using for loop
	for(int i=0; i < length; i++){
		printf("% Marks of Student %d  %d  \n",(i +1),marks[i]);
	}

	return 0;
}
