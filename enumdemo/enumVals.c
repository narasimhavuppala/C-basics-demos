/*
 * enumVals.c
 *
 *  Created on: Apr 2, 2018
 *      Author: Shreemaan
 */

#include <stdio.h>

enum WeekDay {
	Mon, Tue, Wed, Thu, Fri, Sat, Sun
};
//0=Mon,1=Tue,2=Wed

//enum wknumber {
//	Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7, Sun = 8
//};
//
enum machinestate {
	working, failed
};
enum examresult {
	fail, pass
};

int main() {


	//enum examresult student=fail;


	enum WeekDay day = Sun;

	printf("%d \n", day);

	for (int i = Mon; i <= Sun; i++) {
		printf("%d  \n", i);
	}

	return 0;
}
