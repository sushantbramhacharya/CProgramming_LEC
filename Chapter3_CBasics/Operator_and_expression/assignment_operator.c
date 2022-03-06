#include <stdio.h>
void main() {
   int a = 21;
   int c ;

   c = a;
   printf("Line 1 -  = Value of c = %d\n", c );

   c += a;
   printf("Line 2 - += Value of c = %d\n", c );

   c -= a;
   printf("Line 3 - -= Value of c = %d\n", c );

   c *= a;
   printf("Line 4 - *= Value of c = %d\n", c );

   c /= a;
   printf("Line 5 - /= Value of c = %d\n", c );

   c = 200;
   c %= a;
   printf("Line 6 - %= Value of c = %d\n", c );
}
