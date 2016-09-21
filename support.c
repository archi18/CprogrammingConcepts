#include <stdio.h>
extern int count;
int incrementCount(void){
	return ++count;
}

void valueOfGlobStatic(void){
	printf("\n valueOfGlobStatic :: %d" , g_static);
	printf("\n valueOfGlobStatic :: %d" , g_static);
	printf("\n valueOfGlobStatic :: %d" , g_static);
	printf("\n valueOfGlobStatic :: %d" , g_static);

}