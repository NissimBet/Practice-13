//
//	This library is implementing the code of Nissim Betesh, however slightly changed
//	Made By:
//		Nissim Betesh 
//		Jorge Sabella
///

#include <stdio.h>
#include <float.h>

#include "P13DLL.h"

typedef union _MemorySaver {
	int number;
	double dble;
	char string[100];
} MemorySaver;

EXPORT void tryUnion() {
	MemorySaver data;

	printf("Please input an integer: ");
	scanf("%d", &(data.number));

	printf("Please input a string: ");
	getchar();
	/* fgets(data.string, 100, stdin); */
	scanf("%s", data.string);
	

	printf("Please input a double: ");
	// getchar();
	scanf("%ld", &(data.dble));

	printf("your integer <%d> storage size is <<%lu>> bytes\n",
	data.number, sizeof(data.number));

	printf("your string <%s> storage size is <<%lu>> bytes,\
and I can read it as <<%s>> or as <<%d>> \n",
	data.string, sizeof(data.string), data.string, data.string);

	printf("your double <%d> storage size is <<%lu>> bytes,\
I can read any number from <<%.10e>> to <<%.10e>> in this data type\n",
	data.dble, sizeof(data.dble), DBL_MAX, DBL_MIN);

}