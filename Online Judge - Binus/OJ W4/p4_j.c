/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, k, t;
    
    //x = lift x naik
    //y = lift y turun
    //k = lift k berhenti di lantai k
    
    scanf("%d %d %d", &x, &y, &k);
    
    for (t = 0; t <= 100; t++) {
        
        int lx = x + t;
        int ly = y - t;
        int lk = k;
        
        if (lx == ly && lx == lk) {
            printf("%d\n", t);
            return 0;
        }
        
    }
    
   printf("-1\n");
    
    return 0;
}
