#include <stdio.h>
#include <stdarg.h>

double calAverage(int,...);

int main(void){
	printf("avearge of  2 , 4 , 5, 6 , 7 :: %f \n",calAverage(5,2 , 4 , 5, 6 ,7));
    printf("avearge of  2 , 4 , 5, 6 , 7 :: %f \n",calAverage(6,2 , 4 , 5, 6 , 7, 9));
	return 0;
}

double calAverage(int num,...){
   va_list valist;
   double sum = 0.0;
   int i;
   va_start(valist, num);

   for (i = 0; i < num; i++) {
      sum += va_arg(valist, int);
   }
	
   va_end(valist);

   return sum/num;

}