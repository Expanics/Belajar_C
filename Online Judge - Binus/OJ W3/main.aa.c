#include <stdio.h>

int main() {

    int a, b, c;
    double hasil;
    scanf("%d %d %d",&a,&b,&c);
    hasil = ((double) a * 0.2) + ((double) b * 0.3) + ((double) c * 0.5);
    printf("%.2lf\n", hasil);

    return 0;
}