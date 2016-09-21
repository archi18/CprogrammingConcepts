#include <stdio.h>
#include <conio.h>
#define WIDTH 50
#define HEIGHT 70

extern int a,b;
extern int *pointer_to_a, *pointer_to_b;
static int static_count;

void staticTest(void);
int* pointerfunctionSum(int *a, int *b);

void main(void){
	printf("Hello World");
	int a=10;
	int b=50;
	float c=100.5;
    static int l_static_count;
	int *pointer_to_a;
	int *pointer_to_b;
	int *pointer_to_sum;
	float *pointer_to_c;
	pointer_to_a = &a;
	pointer_to_c = &c;
	static_count = 50;
	printf("\n pointer_to_a  %p :: ",pointer_to_a);
	printf("\n pointer_to_a  %d :: ",pointer_to_a);
	printf("\n pointer_to_a  %p :: ",*pointer_to_a);
	printf("\n pointer_to_a  %d :: ",*pointer_to_a);
	printf("\n pointer_to_a  %p :: ",&pointer_to_a);
	printf("\n pointer_to_a  %d :: ",&pointer_to_a);
	printf("\n pointer_to_a  %p :: ",a);
    printf("\n pointer_to_a  %d :: ",a);
    printf("\n pointer_to_a  %p :: ",&a);
    printf("\n pointer_to_a  %d :: ",&a);
    printf("\n pointer_to_c  %f :: ",*pointer_to_c);
    printf("\n Area is %d :: ",WIDTH * HEIGHT);	
    staticTest();
    pointer_to_sum = pointerfunctionSum(&a, &b);
    printf("\n pointerfunctionSum sum :: %d ",*pointer_to_sum);
    printf("\n pointerfunctionSum add :: %p ", pointer_to_sum);

}

void staticTest(void){
	printf("\n Value of static variable static_count IS :: %d", static_count);
}

int* pointerfunctionSum(int *a, int *b){
	int c = (*a + *b);
	int *pointer_to_c = &c; 
	return pointer_to_c;
}	