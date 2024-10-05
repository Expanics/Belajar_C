/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, i, j;
    char w[101] = "";
    
    scanf("%d",&a);
    
    for (i = 1; i <= a; i++) {
        scanf("%d\n", &b);
        scanf("%[^\n]", w);
        
        printf("Case #%d: ", i);
        for (j = 0; j < b; j++) {
            if ((w[j] >= 65 && w[j] <= 90) || (w[j] >= 97 && w[j] <= 122)) {
                printf("%c", w[j]);
            }
        }
        printf("\n");
    }
    return 0;
}