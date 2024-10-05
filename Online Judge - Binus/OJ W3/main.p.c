#include <stdio.h>
#include <math.h>

int main() {
   
   
   

    int a, b, c, d, e, f, g, h;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    scanf("%d %d",&e,&f);
    scanf("%d %d",&g,&h);
    double hasil1 = (double) b / (1.00 - (double) a / 100.00);
    printf("$%.2lf\n", hasil1);
    double hasil2 = (double) d / (1.00 - (double) c / 100.00);
    printf("$%.2lf\n", hasil2);
    double hasil3 = (double) f / (1.00 - (double) e / 100.00);
    printf("$%.2lf\n", hasil3);
    double hasil4 = (double) h / (1.00 - (double) g / 100.00);
    printf("$%.2lf\n", hasil4);
    
    return 0;
}