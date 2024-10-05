
#include <stdio.h>

int main()
{
    double a,b;
    double c,d,e;
    scanf ("%lf %lf",&a,&b);
    c=a+(a*b/100.00);
    d=c+(c*b/100.00); 
    e=d+(d*b/100.00);
    printf ("%.2lf\n",e);
  
    
 
    return 0;
}