
#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    double f;
    // int a1,b1,c1,d1;
    // int a2,b2,c3,d4;
    
    do{
        scanf ("%d %d %d %d", &a, &b, &c, &d);
        f= (a*2)+(b*2)+(c*2)+d;
        printf ("%.2lf\n",f);
        e++;
    }while (e<=2);
    
    
    
    return 0;
}
