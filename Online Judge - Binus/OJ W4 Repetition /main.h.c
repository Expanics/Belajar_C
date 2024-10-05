#include <stdio.h>

int main() {
    int a, j, i;
   
    scanf("%d", &a);
    

    for (i = 0; i < a; i++) {
    for (j = 0; j < a; j++) {
        printf("*");
    }
        printf("\n");
    }

    return 0;
}