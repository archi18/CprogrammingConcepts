#include <stdio.h>
#include <string.h>
void main(void)
{
	char str1[] = "hello";
	char str2[] = "Archi";
	char str3[] = "Dsouza";
	char str4[] = "";

	printf("\n strcomp %d",strcmp(str1,str2));
	strcpy(str4,str1);
	printf("\n strcpy %s",str4);
	printf("\n strlen %d :: %d :: %d", strlen(str1),strlen(str2),strlen(str3));
	strcat(str1, str2);
	printf("\n strcat :: %s ",str1);
	printf("\n strchar :: %d ",strchr(str1,'l'));
	printf("\n strStr ::%d ", strstr(str3,"za"));
	return;
}