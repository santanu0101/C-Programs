#include <stdio.h>

int main() {

   int radius;     
   printf("enter the radius:");
   scanf ("%d",&radius);    
   printf("Perimeter of the Circle = %f inches\n",  2 * 3.14 * radius);
	
   printf("Area of the Circle = %f square inches\n",  3.14 * radius * radius);

   return(0);
}