/*
 * strStudent.h
 *
 *  Created on: Apr 3, 2018
 *      Author: Shreemaan
 */

#ifndef STRSTUDENT_H_
#define STRSTUDENT_H_

struct Student{
	short int id; //Uniquely identify
	char name [50]; //Strings: Character Array: 'A'   "C Programming"
	short int age;
	char subject [100];//String : Character Array
	short int marks ; //Marks are per 50
	float percentage;

};

#endif /* STRSTUDENT_H_ */
