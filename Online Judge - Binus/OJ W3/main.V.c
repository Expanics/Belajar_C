#include <stdio.h>

int main()
{
    int T;
    double A;
  scanf ("%d",&T);
    for (int i=0;i<T;i++){
        scanf ("%lf",&A);
        printf ("%.2lf %.2lf %.2lf\n",(4/5.0)*A,((9/5.0)*A)+32,A+273);
    }
    return 0;
}