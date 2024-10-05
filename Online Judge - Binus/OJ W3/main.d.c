#include <stdio.h>

int main() {
    int a, b, i;
  
    scanf("%d", &a);
    scanf("%d", &b);
    

    for(i = 0; i <= b; i++) {
        printf("%d\n", a); 
        a++;
    }

    return 0;
}