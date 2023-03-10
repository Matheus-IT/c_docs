#include <stdio.h>
#include <stdlib.h>
/*
        *** The #ifdef, #ifndef, and #undef Directives ***
    - The #ifdef, #ifndef, and #undef directives operate on macros created with #define.
    - For example, there will be compilation problems if the same macro is defined twice, so
    you can check for this with an #ifdef directive. Or if you may want to redefine a macro,
    you first use #undef.
*/

#define RATE 0.08
#ifndef TERM
    #define TERM 24
#endif

int main() {
    #ifdef RATE  /* this branch will be compiled */
        #undef RATE  
        printf("Redefining RATE\n");
        #define RATE 0.068
    #else  /* this branch will not be compiled */
        #define RATE 0.068
    #endif

    /*
        - An #endif is required to close the block of code.
        - An #elif directive is like an else if and can be used to provide additional alternatives
        after #else.
    */
    printf("%f  %d\n", RATE, TERM);
    return 0;
}
