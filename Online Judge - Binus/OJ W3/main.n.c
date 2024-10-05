#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    double hasil = ((double) x - (double) y) / x * 100;
    printf("%.2lf%%\n", hasil);

    return 0;
}