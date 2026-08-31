#include <stdio.h>
#include <stdbool.h>

int main(){
int a;
    printf("size of int   =%zu bytes\n", sizeof(int))
printf("size of int_a   = %zu bytes\n", sizeof(a));
    printf("size of short  =%zu bytes\n", sizeof(short));
    printf("size of long   =%zu bytes\n", sizeof(long));
printf("size of char = %zu byte\n", sizeof(char));  //Always 1
_Bool boolVar = 0;
_Bool boolVar = 10;
_Bool boolVar =-50;
printf ("boolvar = %i\n", boolVar)
printf ("boolvar1 = %i\n", boolVar)
printf ("boolvar2 = %i\n", boolVar)
printf("size of bool    = %zu bytes\n" , sizeof(_Bool));
    return 0;
}
