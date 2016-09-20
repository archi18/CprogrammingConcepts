#include <stdio.h>
#include <string.h>

void main(void){
	int a[5];
	char str[20];
    int b;

/*	printf("\n Enter value for A : ");
	for(int i=0; i<5; i++){
		  a[i] = getchar();
	}
	printf("\n Content of A : ");
	for(int i=0; i<5; i++){
		  putchar(a[i]);
	}*/
	printf("\nEnter value for str :: ");
	gets(str);

	printf("\n value in str ");
	puts(str);

	printf("\n enter value for str and a ----");
	scanf("%s %d",&str , &b);

	printf("\nvalue of str and a %s :: %d ",str , b);
}
