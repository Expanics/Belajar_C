#include <stdio.h>
int main()
{
    double a,b,c,d;
    int f;
    scanf ("%d", &f);
    for(int i=0; i<f;i++){
    scanf ("%lf %lf %lf %lf", &a, &b, &c ,&d);
     printf ("%.2lf\n",(a*2)+(b*2)+(c*4/3)+(d/2));
    }
    return 0;
}