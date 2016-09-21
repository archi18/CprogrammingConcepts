#include <stdio.h>
#include <string.h>

typedef union{
	int a;
	float b;
	char str[20];
}data;

void main(void){
	data data;
	printf("\n size of testUnion %d::" ,sizeof(data));

	
	data.b = 500.1524;
    printf("\n c = %f " , data.b);
	strcpy(data.str, "C programming sucks");
	printf("\n str = %s " , data.str);
	data.a = 100;
	printf("\n a = %d " , data.a);
	strcpy(data.str, "1111111");
    printf("\n a = %s " , data.str);

}
