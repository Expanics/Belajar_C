/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    long long int a, b, c, d;

   
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    
    long long lhs = a * b;
    long long rhs = c - d;

    
    if (lhs == rhs) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
