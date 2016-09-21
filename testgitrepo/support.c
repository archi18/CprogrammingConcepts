#include <stdio.h>
extern int count;
int incrementCount(void){
	return ++count;
}

void valueOfGlobStatic(void){
	
	printf("\n Hello Jeevika :: %d" , g_static);

}