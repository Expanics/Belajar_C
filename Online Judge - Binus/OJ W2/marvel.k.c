/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int h;
    char name[101], NIS[9];
    int age;
    
    scanf("%[^\n]", name);
    scanf("%s %d", NIS, &age);
    printf("Name: %s\n", name);
    printf("NIS: %s\n", NIS);
    printf("Age: %d\n", age);
    return 0;
}