#include <stdio.h>
#include <string.h>

typedef struct{
	int sub1;
	int sub2;
	int total;
}student;

int calculateTotal(student);
void main(void){
	student m_stud; 
	m_stud.sub1 = 90;
	m_stud.sub2 = 80;
	printf("\n m_stud.total  :: %d",m_stud.total);
	int total = calculateTotal(m_stud);
	printf("\n total  :: %d",total);
	m_stud.total = total;
	printf("\n m_stud.total  :: %d",m_stud.total);
	return;
}

int calculateTotal(student stud){
	stud.total = stud.sub1 + stud.sub2;
	return stud.total;
}