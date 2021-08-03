#include <string.h>
#include "libft.h"

int main()
{
   char a[] = { 100, 1, 4, 1};
   char b[] = { 101, 100, 83, 86 };
   int i;

   for( i=0; i<3; i++ )
     printf( "a[%d]=%c ", i, a[i] );
   printf( "\n" );
   for( i=0; i<3; i++ )
     printf( "b[%d]=%c ", i, b[i] );
   printf( "\n" );

   printf("\n	  Funcion ft\n");
   printf("----------------------------------\n");
   i = ft_memcmp( a, b, 4 );
   printf( "a es " );
   if( i < 0 )  printf( "menor que" );
   else if( i > 0 )  printf( "mayor que" );
   else  printf( "igual a" );
   printf( " b\n" );
 

   printf("\n	  Funcion original\n");
   printf("----------------------------------\n");
   int x; 
   x = memcmp( a, b, 6 );
   printf( "a es " );
   if( i < 0 )  printf( "menor que" );
   else if( i > 0 )  printf( "mayor que" );
   else  printf( "igual a" );
   printf( " b\n" );
}
