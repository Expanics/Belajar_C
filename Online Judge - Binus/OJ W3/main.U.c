#include <stdio.h>

int main()
{
    double a,c,d,e;
    int b;
  scanf ("%d",&b);
    
    do{
        scanf ("%lf %lf", &c, &d);
        a= c*d/360.00;
        printf ("%.2lf\n",a);
        e++;
    }while (e<=2);
    
    
    
    return 0;
}