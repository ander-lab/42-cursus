#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "123456789";
   const char src[]  = "abcde";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 2);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
