#include "f2c.h"
#define printt(a,b,c,d) _Generic((c),\
	                       	int: printint, \
                        	long:  printlong,\
				short: printshort, \
				float: printfloat, \
				double:printdouble,\
				char:  printchar,\
				char *:printstr,\
				void *:printpoint)(a,b,c,d)
extern void printint(integer *idk1,integer *idk2 ,int string, ftnlen idk3);
extern void printlong(integer *idk1,integer *idk2 ,long string, ftnlen idk3);
extern void printshort(integer *idk1,integer *idk2 ,short string, ftnlen idk3);
extern void printfloat(integer *idk1,integer *idk2 ,float string, ftnlen idk3);
extern void printdouble(integer *idk1,integer *idk2 ,double string, ftnlen idk3);
extern void printchar(integer *idk1,integer *idk2 ,char string, ftnlen idk3);
extern void printstr(integer *idk1,integer *idk2 ,char *string, ftnlen idk3);
extern void printpoint(integer *idk1,integer *idk2 ,void *string, ftnlen idk3);







