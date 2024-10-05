#include <stdio.h>
int main()
{
    long long d;
    double a;
    scanf ("%lf", &a);
    d=(a/2*((a-1)*50)) + (100*a);
    printf ("%lld\n",d);

    return 0;
}