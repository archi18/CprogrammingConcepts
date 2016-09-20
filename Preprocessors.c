#include <stdio.h>

#ifndef MESSAGE 
	#define MESSAGE "you wish"
#endif

#undef MESSAGE 
#define MESSAGE "You dont Wish"

#ifdef MESSAGE
	#define MESSAGE "You should never wish"
#endif

#if !defined (NEW_MESSAGE)
	#define NEW_MESSAGE "I love C programming....!"
#endif

#ifndef __FILE__
	#define __FILE__ "CPreprocessors"
#endif

#define MAX(x,y) (x>y ? x : y)


#define MESSAGE_FOR_YOU(a,b) \
    printf(#a " and " #b " :: we love you")

#define TOKENPASTER(n) \
    printf("\n token"#n " token %d ", token##n);

void main(void)
{
	printf(" The MESSAGE is  :: %s", MESSAGE);
	printf("NEW_MESSAGE :%s\n", NEW_MESSAGE );
	printf("File :%s\n", __FILE__ );
	printf("Line :%d\n", __LINE__ );
	printf("Time :%s\n", __TIME__ );
	printf("Date :%s\n", __DATE__ );
	printf("ANSI :%d\n", __STDC__ );
	printf("Greater value is %d \n", MAX(100,500));	
	MESSAGE_FOR_YOU(Carole, Debra);
	int token34 = 40;
	TOKENPASTER(34);
	return;
}	