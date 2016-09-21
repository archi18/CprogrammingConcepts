#include <stdio.h>

typedef struct{
	int true;
	int false;
}Boolean1;

typedef struct{
	int true :1; 
	int false :1; 
}Boolean2;

typedef struct{
	unsigned int age : 7;	
}Person;

void main(void){
	Boolean1 bool1;
	Boolean2 bool2;
	Person person;
	printf("\n size of boolean1 ::%d", sizeof(bool1));
	printf("\n size of boolean2 ::%d", sizeof(bool2));
	printf("\n size of person ::%d", sizeof(person));
	person.age = 10000;
	printf("\n Age of person ::%d", person.age);
	return;
}

