#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char name[15];
	char *desc;

	strcpy(name, "c is my name");
	desc = malloc(100*sizeof(char));
	printf("before size of %d\n",sizeof(desc));
	desc = realloc(desc, 200*sizeof(char));
	printf("after size of %d\n",sizeof(desc));
	desc = "c is programming language. It is vey easy language developed by Dennis Ritchie";
	printf("name  :: %s \n",name);
	printf("desc :: %s\n",desc);
	free(desc);
	printf("Cleared desc :: %s\n",desc);
	return 0;
}