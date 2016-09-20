#include <stdio.h>
int count =100;
static int g_static =100;
extern int incrementCount(void);
extern void valueOfGlobStatic(void);
void main(void){
	int count=500;
	printf("\n Count before calling incrementCount %d:: ",count);
	printf("\n Count after calling incrementCount %d:: ",incrementCount());
	valueOfGlobStatic();
}