#include <stdio.h>
int main()
{
    long long d;
    scanf ("%lld", &d);
    printf ("%lld\n",(1LL<<d)-1);
    return 0;
}