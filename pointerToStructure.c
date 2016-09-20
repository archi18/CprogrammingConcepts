#include <stdio.h>
#include <string.h>

typedef struct{
	int sub1;
	int sub2;
	int total;
}student;
void calTotal(student *);

void main(void){
	student m_stud;
	m_stud.sub1 =100;
	m_stud.sub2 =200;
	calTotal(&m_stud);
	printf("\n total :: %d ", m_stud.total);
	printf("\n");
	return;
}

void calTotal(student *stud){
	stud->total = stud->sub1 + stud->sub2; 
}