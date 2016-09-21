#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int	sum = 0;
	int n = 10;
	for(int i=1;i<2*n;i++)
		for(int j=1;j<i*i;j++)
			for(int k=1;k<j;k++)
				if (j % i ==1)
					sum++;
	printf("Cleared desc :: %d\n",sum);
	printf("Cleared desc :: %d\n",(n*n*n*n));
	return 0;
}


