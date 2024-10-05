/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int gojo, bipay, i, T;

    scanf("%d", &T); 

    for (i = 1; i <= T; i++) {
        scanf("%d %d", &gojo, &bipay); 
    

        printf("Case #%d: ", i);
        if (gojo > bipay) {
            printf("Go-Jo\n"); 
        } else {
            printf("Bi-Pay\n"); 
        }
    }

    return 0;
}
