
#include <stdio.h>

int main()
{
    int f;
    double a,b,c;
    scanf ("%d", &f);
for (int i=0;i<f;i++){
    scanf ("%lf %lf",&a ,&b);
    c= (a*b)/100.00;
    printf("%.2lf\n", c);
    
    
    
}
    return 0;
}