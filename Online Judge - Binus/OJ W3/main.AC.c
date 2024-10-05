#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);


    int total_possibilities = (1 << N) - 1;


    printf("%d\n", total_possibilities);

    return 0;
}