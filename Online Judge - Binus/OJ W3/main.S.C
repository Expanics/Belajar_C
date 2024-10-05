#include <stdio.h>
int main()
{
    double a,b,c;
    scanf ("%lf %lf %lf",&a,&b,&c);
    printf ("%.3lf\n",(c*b)+(b*a*3));
    return 0;
}