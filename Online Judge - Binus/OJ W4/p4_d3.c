/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int t, n, m, x, i; 

    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        
        scanf("%d %d", &n, &m);
        x = n * m;
        if (x % 2 == 0) {
            printf("Case #%d: Party time!\n", i);
        } else {
            printf("Case #%d: Need more frogs\n", i);
        }
    }

    return 0;
}

