/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int t, a, b, c, i, cb;
    
    scanf("%d", &t);
    
    for (i = 1; i <= t; i++) {
        scanf("%d %d %d", &a, &b, &c);
        
        int cb = a*b/100;
        
        if (cb > c) {
            cb = c;
        }
        
        printf("Case #%d: %d\n", i, cb);
        
    }
    

    return 0;
}
