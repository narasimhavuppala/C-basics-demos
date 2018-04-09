/*
 * StructDemo.c
 *
 *  Created on: Apr 3, 2018
 *      Author: Shreemaan
 */


#include <stdio.h>
#include <strings.h>
#include "strStudent.h"

//Try to define outside of the Main




int main(){

	//Define student
	struct Student std1={0};//Initializing to a null or else garbage value



	//Populate values
	std1.id=1;
	strcpy(std1.name,"Narasimha");
	strcpy(std1.subject,"C Programming");
	std1.age=29;
	std1.marks=36;
	std1.percentage=71.5;


	//Print values
	printf("%d\n",std1.id);
	printf("%s\n",std1.name);
	printf("%f\n",std1.percentage);


	return 0;
}
