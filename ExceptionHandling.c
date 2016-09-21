#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

void main(void)
{	
	int errnum;
	FILE *file;
	file = fopen("test.txt","r+");
	fprintf(stderr, "Before Error: %s \n",strerror(errnum));
	if(file==NULL){
		errnum = errno;
		fprintf(stderr, "printed using fprintf %d \n", errno);
		perror("Error printed by perror ");
		fprintf(stderr, "Error opening file: %s \n",strerror(errnum));
	}else{
		fclose(file);
	}
	for(int i=0; i<45; i++){
		printf("Code Error %d :: %s \n",i,strerror(i));
	}

	//printf("stderr %s\n",typeof(stderr));
	return;
}