#include <stdio.h>

void writeFile(FILE *, char *);
void readFile(FILE *,char *);

void main(void){
	FILE *file;
	char *path="temp/test.txt";
	printf("%s\n",path);
	writeFile(file,path);
	readFile(file,path);
	return;
}

void readFile(FILE *file, char *path){
	file = fopen(path , "r");
	if(file)
		printf("\n file opened");
    char *buff;

	char getc  = fgetc(file);
	printf("\n 1 char :: %c ",getc);

    getc  = fgetc(file);
	printf("\n 2 char :: %c ",getc);
	fgetc(file); 

	fgets(buff,25,file);
	printf("\n 3 gets :: %s ",buff);
	
	fgets(buff,255,file);
	printf("\n 4 gets :: %s ",buff);
	
	int fscan = fscanf(file,"%s", buff);
	printf("\n 5 fscan :: %s ",buff);
	
	int eof= fclose(file);
}

void writeFile(FILE *file, char *path){
	file = fopen(path , "w+");
	if(file)
		printf("\n file opened");
	char *fileStr= "fuck this actually works";
	int putc = fputc('@',file);
	fputc('!',file);
	int puts = fputs("\nThis is test file.",file);
	int putf1 = fprintf(file, "\nC programming sucks ");
	int putf2 = fprintf(file, "\n%s", fileStr);
	int eof= fclose(file);

	printf("\n putc :: %c || puts :: %d || putf :: %d || EOF :: %d", putc, puts, putf1, eof);
}

	