/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char x1, x2, x3;

   
    scanf(" %c %c %c", &x1, &x2, &x3);

    
    if (x1 <= x2 && x1 <= x3) {
        if (x2 <= x3)
            printf("1 2 3\n");  
        else
            printf("1 3 2\n"); 
    } else if (x2 <= x1 && x2 <= x3) {
        if (x1 <= x3)
            printf("2 1 3\n"); 
        else
            printf("2 3 1\n");  
    } else {
        if (x1 <= x2)
            printf("3 1 2\n");  
        else
            printf("3 2 1\n"); 
    }
    
    //ASCII CHECKER
    //printf("%d %d %d", x1, x2, x3);

    return 0;

}
