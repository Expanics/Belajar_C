/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char id[11], nama[101], class[2];
    int num;
    scanf("%s\n", id);
    scanf("%[^\n]\n", nama);
    scanf("%s %d", class, &num);
    
    printf("Id    : %s\n", id);
    printf("Name  : %s\n", nama);
    printf("Class : %s\n", class);
    printf("Num   : %d\n", num);
    
    return 0;
}